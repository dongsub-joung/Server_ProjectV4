#pragma once

#include "ServerCapacity.h"
#include "UserInfo.h"

#include "Admin_ApproveUser.h"

struct AdminInfo
{
public:
	string m_adminCode{ "0000" };

	static AdminInfo& getInstance()
	{
		static AdminInfo instance;
		return instance;
	}
`	
private:
	AdminInfo() {}
	AdminInfo(const AdminInfo& admin_info) {}
	AdminInfo& operater(const AdminInfo& admin_info) {}
};

class AdminClass
{
public:
	AdminInfo& admin = AdminInfo::getInstance();

	bool antiSocial(String str);
	bool CheckingCode(string inputed);
	bool deneidSimillerCode(String pre_set, String new_set);
	void ChangeCode();	
	void PrintUserInfo();
	void AddCapacity();
	void ApproveUser();
};