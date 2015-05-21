#include "catch.hpp"
#include "hippomocks.h"
#include "../src/Connection.h"
#include "../src/ClientApp.h"
#include "../src/UserName.h"

SCENARIO("sending messages to server")
{
	GIVEN("a user who wants to use tuit app")
	{
		MockRepository mocks;
		std::shared_ptr<Connection> connection(mocks.Mock<Connection>());
		WHEN("he writes tuit $his_user post message")
		{
			THEN("the client should call the connection.post(user_name, message)")
			{
				UserName user_name("user_name");
				Message message("message");
				ClientApp app(connection);
				mocks.ExpectCall(connection.get(), Connection::Post).With(user_name, message).Return(Status::OK);
				app.User(user_name).Post(message);
			}
		}

		WHEN("the user writes tuit $his_user read $other_user")
		{
			THEN("the client should call the connection.read(oher_name)")
			{
				ClientApp app(connection);
				UserName self_name("my_name");
				UserName other_name("other_name");
				mocks.ExpectCall(connection.get(), Connection::Read).With(other_name).Return(nullptr);
				auto other_messages = app.User(self_name).Read(other_name);
			}
		}
		mocks.ExpectCallDestructor(connection.get());
	}
}