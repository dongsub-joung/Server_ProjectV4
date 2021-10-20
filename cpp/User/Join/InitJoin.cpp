/**
*@brief		InitJoin function workflow
*@details
*			1. Join UI
*			2. Filter PW
*			3. Save User ID Number
*			4 Encoding Password used SHA 256 
*@author		Joung Dong Sub
*@version		0.0.4
*/

#pragma once

#include "Join.h"
#include "SHA256_Join.h"

using namespace std;

class InitJoin{
public:
	InitJoin(){}~
}

InitJoin::InitJoin(){
	Join::InitJoin();
}