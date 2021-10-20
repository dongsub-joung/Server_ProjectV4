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
	main(arg){}
private:
	enum Main_Selection
	{
		Select_UserMode  = 1,
		Select_AdminMode = 2,
		Select_JoinMode  = 3
	};
	UserMode user_mode;
	AdminModeFunction admin_mode;
	Join user_join;
}


int main::main()
{
	std::cout << "1. UserSpace Mode" << endl;
	std::cout << "2. Administrator Mode" << endl;
	std::cout << "3. Request a Join" << endl;

	int select_mode;
	cin >> select_mode;
	do
	{
		switch (select_mode)
		{
		case Select_UserMode:
			user_mode.ShowServerCapacity();
			user_mode.init_UserMode();
			break;

		case Select_AdminMode:
			user_mode.ShowServerCapacity();
			admin_mode.InitAdminMode();
			break;

		case Select_JoinMode:
			user_join.InitJoin();
			break;

		default:
			cout << "Out of Range\n" << endl;
			continue;
		}
	} while (true);

	return 0;
}