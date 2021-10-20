#pragma once
#include "Default_Include.h"
#include "FileInfo.h"

struct CapacityInfo
{
	double m_storage_capacity;		//MB`
	double m_used_capacity;
	double m_avaible_capacity;
	int m_count_sharding;

private:
	enum default_capacity
	{
		default_capacity = 51200,
		init_used = 0,
		init_avaible = 0,
		defaut_sharding_count = 3
	};
};


class ServerCapacity
{
public:

	void UsedCapacity();			
	void CalculateCapacity();		
	void SendStorageCapacity();		

private:
	FileInfo *file_info = new FileInfo;
	CapacityInfo capacity;
	double m_used;
	double m_avaible;
};