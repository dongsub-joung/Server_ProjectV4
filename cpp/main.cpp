/**
*@brief			init CMD Server
*@details		switch
*@return		return 0		
*@author		Joung Dong Sub
*@version		0.0.4
*@todo			Encoding UserInfo and Admin code
*				User authoriy
*				Expection: Handler in failure Account
*/

#include "User/Mode/UserMode.h"
#include "Admin/Admin_init.h"
#include "User/Join/Join.h"

class main{
public:
	main(){}
private:
	enum Main_Selection
	{
		Select_UserMode  = 1,
		Select_AdminMode = 2,
		Select_JoinMode  = 3
	};
	
	Join 				user_join;
	UserMode 			user_mode;
	AdminModeFunction 	admin_mode;
}

int main::main()
{
	user_join=  new Join();
	user_mode=  new UserMode();
	admin_mode= new AdminModeFunction();

	std::cout << "1. UserSpace Mode 	\n";
	std::cout << "2. Administrator Mode	\n";
	std::cout << "3. Request a Join		\n"<< std::endl;

	int select_mode;
	cin >> select_mode;
	do
	{
		if(select_mode == Select_UserMode):
			user_mode.ShowServerCapacity();
			user_mode.init_UserMode();
			break;
		else if(select_mode == Select_AdminMode):
// 		@todo Overriding Function "ShowServerCapacity" from UserMode.cpp to AdminModeFunction.cpp 
			user_mode.ShowServerCapacity();
			admin_mode.InitAdminMode();
			break;
		else if(select_mode == Select_JoinMode):
			user_join.InitJoin();
			break;
		else:
			cout << "Out of Range\n" << endl;
			continue;
		}
	} while (true);

	return 0;
}


// Init
this::main();
