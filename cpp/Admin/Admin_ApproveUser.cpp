/**
*@brief			AdminMode: 2. Accepte PreUser Infomation Done Join progress
*@details		Transfor Data from struct `PreUser` to struct `User`
*@author		Joung Dong Sub
*@version		0.0.4
*@todo
*		join.cpp > receive >  map<String, bool> un_auths	in "preuser" structure 
								> user_name / default "false" 
							  "userinfo"
*/

#pragma once
#include "Admin_ApproveUser.h"
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


void reciveUserDate()
{
	//return  preuser::
}

void Admin_ApproveUser::showUpUserList(std::map<String, bool> un_auths)
{
	std::cout << "	ID	/	Auth	" << un_auths.size() << std::endl;
	for(std::map<String, bool>::interator itr= un_auths.begin(); itr != un_auths.end(); itr++){
		std::cout << itr->first << " / " << itr->second << '\n';
	}
}

map Admin_ApproveUser::changeTrue(map<String, bool> un_auths, String user_name)
{
	bool search_value= un_auths.count(user_name);
	if (search_value == false)
	{
		un_auths[user_name]= true;
		return un_auths;
	}
}

void throwTheChangedDate(map<String, bool> un_auths)
{
	return un_auths;
}

void Admin_ApproveUser::initApproveUser()
{
	std::map<bool, String> un_auths= reciveUserDate();

	std::cout << "Operate the approve at The UnAuth User; \n";
	std::cout << "Write the User Name you want to pass > \n" << std::endl;
	std::cin >> user_name;
	changeTrue(un_auths, user_name);
	
	std::cout << "Done it, Show up;" << '\n' << std::endl;
	showUpUserList(un_auths);

	std::cout << "-------Sending Data-------"<< '\n' << std::endl;
	throwTheChangedDate(un_auths);

	std::cout << " Completely Done :) "<< std::endl;
}