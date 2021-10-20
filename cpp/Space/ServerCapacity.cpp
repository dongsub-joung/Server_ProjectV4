/**
*@brief			About Servercapacity
*@details		
*				Save data: Hole, Avaible, Used Capacity
*@author		Joung Dong Sub
*@version		0.0.3
*/


#include "ServerCapacity.h"

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