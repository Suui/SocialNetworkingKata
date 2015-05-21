#pragma once
#include <string>

class Message
{
public:
	std::string message_;
	
	Message(std::string message_);

	friend bool operator==(const Message& lhs, const Message& rhs);
};