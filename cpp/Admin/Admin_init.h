#pragma once

#include "Admin_Class.h"

class AdminModeFunction
{
public:
	void InitAdminMode();

private:
	bool admin_login{ true };
	AdminClass admin_class = AdminClass();
	AdminClass& Admin_ = admin_class;
	UserMode user_mode = UserMode();

	enum selecteOPT
	{
		OPT_ChangeAdminCode = 1,
		OPT_ShowJoinedUserInfo = 2,
		OPT_Sharding = 3,
		OPT_WaitingUserInfo = 4,
		OPT_FileUpload = 5,
		OPT_FileDelete = 6,
		OPT_FileDownload = 7
	};

// ------ function ----------
	void AdminLogin();
	void CheckCode(string inputed);
	void ChangeAdminCode();
	void ShowUserInfo();
	void Sharding();
	void WaitingUserInfo();
	bool switchingCase(int, int);

//------ etc function ----------
	void PrintMenu();
};
