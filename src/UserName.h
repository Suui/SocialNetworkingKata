#pragma once
#include <string>

class UserName
{
public:
	std::string user_name_;
	
	UserName(std::string user_name);

	friend bool operator==(const UserName& lhs, const UserName& rhs);

};
