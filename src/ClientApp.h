#pragma once
#include "Connection.h"
#include "UserName.h"
#include "Options.h"
#include <memory>

class ClientApp
{
	std::shared_ptr<Connection> connection;

public:


	explicit ClientApp(const std::shared_ptr<Connection> connection)
		: connection(connection)
	{
	}

	Options User(UserName user_name);
};
