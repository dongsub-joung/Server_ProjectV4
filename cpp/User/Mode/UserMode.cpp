/**
*file			UserMode.cpp
*@details		UserMode UI 
*@author		Joung Dong Sub
*version		0.0.3
*/

#include "UserMode.h"
#include "ServerCapacity.h"


void UserMode::init_UserMode()
{
	ShowServerCapacity();
	FileMenu();
}

void UserMode::ShowServerCapacity()
{
	cout << "The Capacity \n";
	cout << "The entire Server's " << info.m_storage_capacity << "\n";
	cout << "The Shared's" 		   << info.m_used_capacity 	  << "\n";
	cout << "The Avaible's" 	   << info.m_avaible_capacity << "\n" << endl;
}

void UserMode::FileMenu()
{
	cout << "1. Download File \n";
	cout << "2. Upload File   \n";
	cout << "3. Delete File   \n";
	cout << "Select a Service you use \n" << endl;

	int selected_service_Num{};
	
	do
	{
		cin >> selected_service_Num;
		switch (selected_service_Num)
		{
		case 1:
			FileDownload();
			break;
		case 2:
			FileUpload();
			break;
		case 3:	
			FileDelete();
			break;
		default:
			cout << "Out of Service \n" << endl;
			continue;
		}
	} while (true);
}

void UserMode::FileDownload()
{
	file_class->DownroadFile();
}

void UserMode::FileUpload()
{
	double user_capactiy = info.m_used_capacity;
	file_class->UploadFile(user_capactiy);
}

void UserMode::FileDelete()
{
	file_class->DeleteFile();
}