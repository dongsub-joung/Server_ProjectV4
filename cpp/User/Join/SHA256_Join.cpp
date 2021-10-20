#pragma once
#include "Default_include.h"
#include "KISA_SHA256.h"

using namespace std;

typedef unsigned char BYTE;
typedef unsigned int UINT;

class SHA256_Join
{
public:
	SHA256_Join(){}~;
	vector<BYTE> sendHashCode(vector<BYTE> hashed);
private:
	vector<BYTE> hashed;
	void HashUserInfo();
};


void SHA256_Join::HashUserInfo()
{
	//FILE* fp;
	BYTE encrypt[32];
	BYTE plain[32];
	UINT plain_leng = 0;

	memset(plain, 0x00, sizeof(plain));
	memset(encrypt, 0x00, sizeof(encrypt));

	//fp = fopen("SHA-256 Encrypted.txt", "\/");

	cout << "Plaining: \n"; cin >> plain;
	plain_leng = strlen((char*)plain);

	SHA256_Encrpyt(plain, plain_leng, encrypt);

	cout << "Encrypting: \n" << endl;
	for (int i = 0; i < 32; i++)
	{
		auto hash = encrypt[i];
		hashed.push_back(hash);
	}

	sendHashCode(hashed);
}

vector sendHashCode(vector<BYTE> hashed)
{
	return hashed;
}