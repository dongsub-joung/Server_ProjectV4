/**
*@brief			About Servercapacity
*@details		
*				Save data: Hole, Avaible, Used Capacity
*@author		Joung Dong Sub
*@version		0.0.4
*/

#pragma once

#include <string>
#include <map>
#include "FileInfo.cpp"
#include "ServerCapacity.cpp"

using nanespace std;

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



///Default 50G, Sharding limite 3
CapacityInfo::CapacityInfo()
	:m_storage_capacity(),
	m_used_capacity(),
	m_avaible_capacity(),
	m_count_sharding()
{
	default_capacity, init_used, init_avaible, defaut_sharding_count;
};

///Sumurizate each files
void ServerCapacity::UsedCapacity()
{
	file_info->SumFileVolume();
	this->m_used = file_info->m_sum_files;
}

// Calculate avaible capacity
void ServerCapacity::CalculateCapacity()
{
	this->m_avaible = (capacity.m_storage_capacity) - (this->m_used);
}

// Save value
void ServerCapacity::SendStorageCapacity()
{
	capacity.m_used_capacity = this->m_used;
	capacity.m_avaible_capacity = this->m_avaible;
}