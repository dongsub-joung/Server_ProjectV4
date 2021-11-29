/**
*@brief			Init AdminMode
*@details		
*			UI and Show menu(Top component of fame)
*				- Change Admin code
*				- Show User Infomation
*				- Sharding
*				- Show PreUser Infomation and Approve PreUser
*				- (Common) File Functions(Read, Write, Delete)
*@author		Joung Dong Sub
*@version		0.0.4
*/

#pragma once

#include "Admin_init.cpp"
#include "Admin_Class.cpp"
#include "FileClass.cpp"
#include "UserMode.cpp"

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

	void fileUploadMode();
	void fileDeleteMode();
	void DeleteFile();

//------ etc function ----------
	void PrintMenu();
};


void AdminModeFunction::InitAdminMode()
{
	int select;	///< switch index value

	do
	{
		AdminLogin();
	} while (admin_login);
	
	do
	{
		PrintMenu();
		cin >> select;

// @Todo Overwriting from user_mode to this.
		if(switchingCase(select, OPT_ChangeAdminCode)){
			ChangeAdminCode();
			break;
		} 
		if(switchingCase(select, OPT_ShowJoinedUserInfo)){
			ShowUserInfo();
			break;
		} 
		if(switchingCase(select, OPT_Sharding)){
			Sharding();
			break;
		} 
		if(switchingCase(select, OPT_WaitingUserInfo)){
			WaitingUserInfo();
			break;
		} 
		if(switchingCase(select, OPT_FileUpload)){
			FileUploadMode();
			break;
		} 
		if(switchingCase(select, OPT_FileDelete)){
			FileDeleteMode();
			break;
		}
		if(switchingCase(select, OPT_FileDownload)){
			ShowUserInfo();
			FileDownload();
			break;
		} 
		if(select>OPT_FileDownload && select < OPT_ChangeAdminCode) {
			cout << "Out of Range \n" << endl;
			continue;
		}
	} while (true);
}

void AdminModeFunction::AdminLogin()
{
	string inputed;
	std::cout << "-- Inputing code progress -- \n";
	std::cout << "Code:\t" << endl;
	cin >> inputed; CheckCode(inputed);
}

 void AdminModeFunction::CheckCode(string inputed)
{
	Admin_.CheckingCode(inputed);
	this->admin_login = false;
}

 void AdminModeFunction::ChangeAdminCode()
 {
	 Admin_.ChangeCode();
 }

 void AdminModeFunction::ShowUserInfo()
 {
	 Admin_.PrintUserInfo();
 }

 void AdminModeFunction::Sharding()
 {
	 Admin_.AddCapacity();
 }

 void AdminModeFunction::WaitingUserInfo()
 {
	 Admin_.ApproveUser();
 }

void AdminModeFunction::PrintMenu()
{
	cout << "1. Modification of Admin Code \n";
	cout << "2. Info of The User \n"
	cout << "3. Sharding \n"
	cout << "4. Info of The Approve yet \n"
	cout << "5. Upload \n"
	cout << "6. Delete \n"
	cout << "7. Download \n" << endl;
}

bool AdminModeFunction::switchingCase(int selected, int case)
{
	if(select == case) return 1;
	else return 0;
}

void AdminModeFunction::FileUploadMode() : user_mode 
{
	user_mode.FileUpload();
}

void AdminModeFunction::FileDeleteMode() : user_mode 
{
	user_mode.FileDelete();
}

void AdminModeFunction::FileDeleteMode() : user_mode 
{
	user_mode.ShowUserInfo();
	user_mode.FileDownload();
}