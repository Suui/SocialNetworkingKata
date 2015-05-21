#include "Options.h"

Options::Options(std::shared_ptr<Connection> connection, UserName user_name) : connection_(connection), user_name_(user_name)
{
}

void Options::Post(Message message)
{
	connection_->Post(user_name_, message);
}

std::shared_ptr<std::vector<Message>> Options::Read(UserName other_name)
{
	return nullptr;
}