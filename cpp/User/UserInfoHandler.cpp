/**
*@brief			Save User struct
*                   - ADD INDEXING SYSTEM(0.0.4)
*@details	    Searching index: Not hashed user index <id, pass>
*               It needs to generate to token of auth for security and indexing.
*               
*@version		0.0.4
*@author		Joung Dong Sub
*/

#pragma once

#include "Userinfo.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class UserInfoHandler
{
public:
    UserInfoHandler(){};

    // About Searching index
    void setUserIndex(map<string,bool>* indexs);
    map<string, bool> getUsersIndex();

    // About pre's
    void setPreuser(string id, string PW, string my_number);
    UserInfo::User getPreuser();
    vector<string> getPreuserID(vector<UserInfo::User> users);
    vector<string> getPreuserMynumber(vector<UserInfo::User> users);
    
    // About approved's  
    UserInfo::approved_users getApprovedUser();

private:
    UserInfo::User           unapproved_users;
    UserInfo::approvedUsers  approved_users;
    map<> m_user_index= new map<string, bool>;
    
    // Inner
    UserInfo::approvedUsers moveUserData(User unapproved_users, string id, string lvl);
}

// About Searching index
void UserInfoHandler::setUserIndex(UserInfoHandler.user_index, string id)
{
    // Init Join.cpp, then received data.
    user_index.set(id, false);
}
void UserInfoHandler::getUsersIndex()
{
    // @todo Need Pre locate value at Join.cpp
    map<string, bool> copy= m_user_index; // or &
}

// About pre's
void UserInfoHandler::setPreuser(string id, string PW, string my_number)
{
    unapproved_users= new User(id, PW, my_number);
}

vector<string> UserInfoHandler::getPreuserID(vector<UserInfo::User> users)
{
    vector<string> ids;

    int max_size= users.size();
    for(int i=0; i<max_size; i++) id.push(users[i].m_user_ID);
    return ids;
}

vector<string> UserInfoHandler::getPreuserMynumber(vector<UserInfo::User> users)
{
    std::vector<string> my_numbers;

    int max_size= users.size();
    for(int i=0; i<max_size; i++) my_numbers.push(users[i].my_number);

    return my_numbers;
}

unapproved_users UserInfoHandler::getPreuser()
{
    return unapproved_users;
}

// About approved's 
approvedUsers UserInfoHandler::getApprovedUser()
{
	return approved_users;
}

// Inner
UserInfo::approvedUsers UserInfoHandler::moveUserData(User unapproved_users, string id, string lvl)
{
    bool id_checker{false};

    id_checker= user_index.count(id) : true ? false;
    if(id_checker)
    {
    	user_index[id]= true;
        approved_users= new Userinfo::approvedUsers(lvl);
    	(UserInfo::approvedUsers) approved_users= (UserInfo::User) unapproved_users;
        return approved_users;
    }
    else { cout<< "UnJoined ID\n" << endl; return; }
}