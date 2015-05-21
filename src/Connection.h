#pragma once
#include "UserName.h"
#include "Message.h"
#include "Status.h"
#include <memory>
#include <vector>

class Connection
{

public:
	Connection();

	virtual ~Connection()
	{
	}


	virtual Status Post(UserName user_name, Message message);

	std::shared_ptr<std::vector<Message>> Read(UserName other_name);
};
