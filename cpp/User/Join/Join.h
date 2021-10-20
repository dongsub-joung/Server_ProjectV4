/**
*@brief		Join(1/2)
*@details
*			Join UI
*			Filter PW
*			Save User ID Number
*			Encoding Password used SHA 256 
*@author		Joung Dong Sub
*@version		0.0.4
*/

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cstring>
#include <regex>

#include "UserInfo.h"
#include "SHA256_Join.h"

using namespace std;

class Join
{
public:
	string m_id{" "};
	string m_password{" "};
	string m_user_id_number{" "};

	PreUser preUser;
	SHA256_Join sha256_join;
	
	Join(){};
	void SavePreUser();
	void InitJoin();

private:
	bool m_password_control{ true };

	bool CheckUserIdNumber(string user_id_number);	// User ID Number) Char[13]
	bool CheckSpell(string password);				// ) a-z,A-Z,0-9
	bool CheckLength(string password);				// ) char[n], n>8
	bool CheckNumber(string password);				// ) Block the `User ID Number`
	void CheckPassword(bool, bool, bool);			// Final auth
	void authConditions(int conditons);				// MSG code each cases
};