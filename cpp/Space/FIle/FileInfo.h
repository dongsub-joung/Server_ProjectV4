#pragma once
#include "Default_Include.h"

struct FileInfo
{
public:
	void ShowFileList();							
	void CheckDownloadFile(string title);			
	void UploadFile(string title, double volume);	
	void DeleteFile(string title);					
	void SumFileVolume();							

	double m_sum_files;								

private:
	map<string, double> m_fileID;					
};
