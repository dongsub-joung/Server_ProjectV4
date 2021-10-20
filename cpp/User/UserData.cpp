/**
*@brief			Save User struct
*@details	    Handle vectorstruct Mapping the address value
*               ex) struct= original_sorce(progress done)
*               If mark_users's bool value is "flase", change type at force.
*@version		0.0.4
*@author		Joung Dong Sub
*/

#pragma once

#include UserInfoHandler.cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Array... Arrayy..
static class UserData{
public:
    UserData(){}
    static void setData(UserInfo users);
    static vector<struct> getData();
private:
    static vector<>* USERDATA= new vector<UserInfo::approvedUsers>;
}

UserData::UserData(UserInfo::User* users) { USERDATA.set(&users); }
static vector<struct> UserData::getData() { return &USERDATA; }