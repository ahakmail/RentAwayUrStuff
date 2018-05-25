#include"stdafx.h"
#include<iostream>
#include<string>

#ifndef CARDINFO_H
#define CARDINFO_H

using namespace std;

class CardInfo {
public:
	CardInfo();
	void SetCard();
	void PrintINFO();
	
private:
	unsigned long long CardNumber;
	unsigned short int CVV;
	unsigned short int ZIP;
	string name;
	string address;
};

#endif CARDINFO_H