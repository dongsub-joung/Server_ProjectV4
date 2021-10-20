/**
*@brief			AdminMode: 2. Accepte PreUser Infomation Done Join progress
*@details		Transfor Data from struct `PreUser` to struct `User`
*@author		Joung Dong Sub
*@version		0.0.4
*@todo
*		join.cpp > receive >  "preuser" structure 
							  "userinfo"
*/

#pragma once
#include "UserInfo.h"

class Admin_ApproveUser
{
public:
	void reciveUserDate();
	void showUpUserList(map<String, bool> un_auths);

	map changeTrue(map<String, bool> un_auths, String user_name);
	map throwTheChangedDate(un_auths);
	void initApproveUser(map<String, bool> un_auths);
};