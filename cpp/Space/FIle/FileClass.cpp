/**
*@brief			Common: File Functions(Read, Write, Delete)
*@details		Input data and Save in struct `FileInfo`
*@author		Joung Dong Sub
*@version		0.0.4
*/

#pragma once

#include "FileClass.cpp"
#include "FileInfo.cpp"
#include "ServerCapacity.cpp"

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


File::~File()
{
	delete info;
}

void File::UploadFile(double available_capacity)
{
	string title; double volum;
	showString01("Uploading"); 			 cin >> title;
	cout << "Enter a File Volum(/MB)\n"; cin >> volum;

	double check_volum = available_capacity - volum;
	if (check_volum > 0)
	{
		info->UploadFile(title, volum);
	}
	else
	{
		cout << "Overflow the limited volume, So Denied the work.\n" << endl;
	}
}


void File::DownroadFile()
{
	string input;
	info->ShowFileList();

	showString01("Downloading");
	cin >> input;
	info->CheckDownloadFile(input);
}


void File::DeleteFile()
{
	string input_name;

	info->ShowFileList();

	showString01("Deleting"); cin >> input_name;
	info->DeleteFile(input_name);
}

void File::showString01(String modes)
{
	cout << "---------"<< modes <<"---------\n";
	cout << "Enter a File Name. \n"<< endl;
}