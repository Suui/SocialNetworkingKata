#include "ClientApp.h"
#include "UserName.h"
#include "Options.h"


Options ClientApp::User(UserName user_name)
{
	return Options(connection, user_name);
}