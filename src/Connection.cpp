#include "Connection.h"

Connection::Connection()
{
}

Status Connection::Post(UserName user_name, Message message)
{
	return Status::OK;
}

std::shared_ptr<std::vector<Message>> Connection::Read(UserName other_name)
{
	return nullptr;
}