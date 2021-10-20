/**
*@brief		Join(2/2)
*@details
*			Join UI
*			Filter PW
*			Save User ID Number
*			Encoding Password used SHA 256 
*@author		Joung Dong Sub
*@version		0.0.4
*@todo
*  User 1. Nomal 2. Denied 
*  Join -> Approve -> Nomal User	-> 
* 				N	-> cant access
*/

#include "Join.h"

void Join::InitJoin()
{
	cout << "---- Join ----\n" << endl;

	do
	{
		cout << "Please, Enter the your's My Number >> ";
		cin >> m_user_id_number;
	} while (CheckUserIdNumber(m_user_id_number));

	do
	{
		const int string_condition_alter= 1;
		cout << "Please, Enter the your's ID >> " << endl;
		cin >> m_id;
		authConditions(string_condition_alter);
	} while (CheckSpell(m_id));
	
	do
	{
		const int normal= 0;

		cout << "$ Certificate Serial Number $ \n";
		cout << "------------------------------\n" << endl;
		authConditions(normal);
		cin >> m_password;

		bool spell = ()=> { CheckSpell(m_password) ? true : false; }
		bool length = ()=> { CheckLength(m_password) ? true : false; }
		bool overlap_control = ()=> { CheckNumber(m_password) ? true : false; }

		CheckPassword(spell, length, overlap_control);
	} while (m_password_control);

	SavePreUser();
}

/**
*@todo
*		preuser_info->m_preuser_ID_number = m_user_id_number;
*		vector<BYTE> hased: having the hashed My Number.
*/
void Join::SavePreUser()
{
	preuser_info->m_preuser_ID = m_id;
	preuser_info->m_preuser_PW = m_password;

	sha256_join.HashUserInfo();
	
	UserInfoHandler::setPreuser(string id, string PW, string my_number)
}

void Join::authConditions(int number)
{
	enum case{
		normal= 	 0,
		deny_spell=  1,
		deny_length= 2,
		deny_social= 3
	};

	switch (number)
	{
		case normal:
			for (size_t i = 1; i <= 3; i++)
			{
				authConditions(i);
			}
			break;
		case deny_spell:
			cout << "a-z, A-Z, Numbers Only \n";
			break;
		case deny_length
			cout << "Over 8 Characters\n";
			break;
		case deny_social
			cout << "Warning Social Engineering like Pat name, Personal Number ETC\n" << endl;
			break;
		default:
			cout << "ERR"; 
			break;
	}
	
}

bool Join::CheckSpell(const string password)
{
	string pw = password;
	regex spell("^[A-za-z0-9]*$");
	if (regex_match(pw, spell) == pw.size()) return true;
	else
	{
		cout << "Deny the work. please, do again.\n" << endl;
		const int case01= 1; authConditions(case01);
	}
}

bool Join::CheckLength(const string password)
{
	string pw = password;
	int pw_size = pw.size();
	if (pw_size > 8) return true;
	else
	{
		const int case02= 2; authConditions(case02);
	}
}

bool Join::CheckNumber(const string password)
{
	string pw = password;
	string id_num = m_user_id_number;
	if (id_num != pw) return true;
	else
	{
		const int case03= 3; authConditions(case03);
	}
}

void Join::CheckPassword(const bool spell, const bool length, const bool overlap)
{
	if (spell && length && overlap) this->m_password_control = false;
	else authConditions(-1);
}

bool Join::CheckUserIdNumber(string m_user_id_number)
{
	int char_size = m_user_id_number.size();

	if (char_size <= 13) return false;
	else
	{
		cout << "Fit in the 13 Characters \n" << endl;
	}
}