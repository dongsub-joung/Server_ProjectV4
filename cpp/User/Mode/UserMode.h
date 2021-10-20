/**
*file			UserMode.h
*/

#pragma once

#include "Default_Include.h"
#include "UserInfo.h"
#include "FileClass.h"
#include "ServerCapacity.h"

class UserMode
{
public:
	ServerCapacity capacity;
	File* file_class = new File();
	CapacityInfo info = CapacityInfo();

	void init_UserMode();					///< Run UserMode

	void ShowServerCapacity();
	void FileDownload();
	void FileUpload();
	void FileDelete();

private:
	UserInfo* new_user = newUser;
	void FileMenu();
};