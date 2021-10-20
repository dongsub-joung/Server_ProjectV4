/**
*@brief			FileInfo 
*@details		Accessing struct `FileInfo` and Writing, Reading, Deleting data
*@author		Joung Dong Sub
*@version		0.0.3
*/

#include "FileInfo.h"

// Sum the map<value>
void FileInfo::SumFileVolume()
{
	double sum{ 0 };
	map<string, double>::iterator iter;

	for (iter = this->m_fileID.begin(); iter != this->m_fileID.end(); iter++)
	{
		auto key = iter->second;
		sum += key;
	}

	this->m_sum_files = sum;
}

// Show up the file title by use map's key 
void FileInfo::ShowFileList()
{
	map<string, double>::iterator iter;

	int index{ 1 };
	for (iter = this->m_fileID.begin(); iter != this->m_fileID.end(); iter++)
	{
		cout << "index: " << index;
		cout << iter->first << endl;
		index++;
	}
}

// 
void FileInfo::CheckDownloadFile(string title)
{
	int yes_or_no = this->m_fileID.count(title);

	if (yes_or_no == 1)
	{
		std::cout << "Able download" << endl;
	}
	else
	{
		std::cout << "Not exist File DB" << endl;
	}
}

// Key: File title / Value: Volume  
void FileInfo::UploadFile(string title, double volume)
{
	this->m_fileID.insert(make_pair(title, volume));
}

// Remove Key 
void FileInfo::DeleteFile(string title)
{
	this->m_fileID.erase(title);
}