#pragma once
#include "Message.h"
#include "Connection.h"
#include <memory>
#include <future>

class Options
{
	std::shared_ptr<Connection> connection_;
	UserName user_name_;
public:
	Options(std::shared_ptr<Connection> connection, UserName user_name);

	void Post(Message message);
	std::shared_ptr<std::vector<Message>> Read(UserName other_name);
};
