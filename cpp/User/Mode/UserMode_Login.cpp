/**
*@brief			UserMode_Login.cpp
*@details		Login UI, Using class `UserInfo` for get value data and compare inputed-value
*@version		0.0.4
*@author		Joung Dong Sub
*@todo  	Default User Date: test01 / test
			1. Check once joined user: get vector mark_users<id,bool>
			2. if exist date, check approved: UserInfohander::getApproveUserInfo();	
*/

#pragma once

#include "UserInfoHandler.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <map>

Using namespace std;

class UserLogin
{
public:
	UserLogin(UserInfo newUser);				///< Insert (ID,Password) in map<userID, User PW>
	void InitLogin();

private:
	UserLogin user_login;
	map<string, string> m_account_IDPW;			///< Key:ID, Value:PW

	const bool CheckID(string ID);				///< Check User ID Number (Key: ID)
	const string ReturnPW_Key(string ID);		///< Search Password value(Key: ID)
};

UserLogin::UserLogin()
{
	UserInfoHandler();
	// user_login->m_account_IDPW.insert(make_pair(newUser->m_user_ID, newUser->m_user_PW));
}

void UserLogin::InitLogin()
{
	string inputedID{" "}, inputedPW{" "};
	bool login_success{ true };

	UserLogin user_login();

	cout << "---- CLI: LOGIN ---- \n";
	cout << "ID :\t" << endl;
	cin >> inputedID;

	do
	{
		if (CheckID(inputedID))
		{
			cout << "PW:\t" << endl;
			cin >> inputedPW;

			string approvePW = ReturnPW_Key(inputedID);
			if (inputedPW == approvePW)
			{
				cout << "Completly Done! \n" << endl;
				login_success = false;
			}
			else
			{
				cout << "Incorrectly Access \n";
			}
		}
		else
		{
			cout << "Before the Approving or Not Joiner \n" << endl;
		}
	} while (login_success);
}

const bool UserLogin::CheckID(string ID)
{
	m_account_IDPW.count(ID);
	return true;
}

const string UserLogin::ReturnPW_Key(string ID)
{
	return m_account_IDPW.find(ID)->second;
}