#include "UserName.h"

UserName::UserName(std::string user_name) : user_name_(user_name)
{
}

bool operator==(const UserName& lhs, const UserName& rhs)
{
	return lhs.user_name_ == rhs.user_name_;
}