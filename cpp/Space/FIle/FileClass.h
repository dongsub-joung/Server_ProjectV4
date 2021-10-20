#pragma once
#include "FileInfo.h"
#include "ServerCapacity.h"

// About the Runable "File System"
class File
{
public:
	~File() {};
	FileInfo* info = new FileInfo();
	
	void UploadFile(double capacity);
	void DownroadFile();
	void DeleteFile();
};
