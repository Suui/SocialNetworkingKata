#include "Message.h"

Message::Message(std::string message_)
{
}

bool operator==(const Message& lhs, const Message& rhs)
{
	return lhs.message_ == rhs.message_;
}