/**
*@brief  Declear User Data
*@details
*	Sample levle value "111" or "101"
*@author Joung Dong Sub
*@version		0.0.4
*@todo
*		new PreUser;
*		-> new User= PreUser;
*		Searching Key (ID value or My Number) 
*/

#pragma once
#include "Default_Include.h"
#include <exception>

class UserInfo
{
public:
	UserInfo(){}
private:
	struct User;
	struct UserInfo : User;
} 

struct UserInfo::User
{
	string* m_user_ID{""}
	string* m_user_PW{""}
	string* my_number{""}

	User(string id, string PW, string my_number)
	{
		m_user_ID {id};
		m_user_PW {PW};
		my_number {my_number};
	}
};

struct UserInfo::approvedUsers : User
{
	enum ACCESS{
		READ= 0,
		WRITE= 1,
		MODIFY= 2
	};

	const int ABLE= 1, DISABLE= 0;
	int m_authority_level[3]{ 0,0,0 };
	
	approvedUsers(string level)
	{
		try
		{
			for (int i = READ; i <= MODIFY; i++)
			{
				c= (char) level[i];
				if (c != 33 || c != 34) throw();
			}
		}
		catch(const std::exception& e) std::cerr << e.what() << '\n';

		for (int i = 0; i < level.length(); i++)
		{
			if(level[i] == "1") m_authority_level[i]= ABLE;
		}
	}
};
