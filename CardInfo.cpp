#include"stdafx.h"
#include<iostream>
#include<string>
#include "CardInfo.h"
#include<limits>
using namespace std;
CardInfo::CardInfo() {
	
			this->CardNumber = 0;	
			this->CVV = 0;	
			this->ZIP = 0;
	        this->name = "Deffult";
	        this->address = address;
}
void CardInfo::SetCard()
{

	unsigned long long CardNumber;
	unsigned short int CVV;
	unsigned short int ZIP;
	string name;
	string address;
	
	cout << "enter Card Number 16 digits: "<<endl;
	cin >> CardNumber;
	cout << "enter CVV  3 digits: " << endl;
	cin >> CVV;
	cout << "enter ZIP 5 digits: " << endl;
	cin >> ZIP;
	


	if (CardNumber >999999999999999 && CardNumber< 9999999999999999)
	{
		this->CardNumber = CardNumber;
	}
	else
	{
		
		cout << "Card Number is out of range! three digits" << endl;
	 
	}

	if (CVV >99 && CVV< 999)
	{
		this->CVV = CVV;
	}
	else {
		
			cout << "CVV is out of range! five digits" << endl;
	}
	if (ZIP >9999 && ZIP< 99999)
	{
		this->ZIP = ZIP;
	}
	else
	{
		
		cout << "ZiP is out of range!" << endl;
	}
	cout << "enter name" << endl;
	cin>> name;
	this->name = name;
	
}
void CardInfo::PrintINFO()
{
	cout << "Card Number :" << CardNumber<<endl;
	cout  << "Card CVV :" << CVV << endl;
	cout << "Card ZIP :" << ZIP << endl;
	cout  << "Card Name Holder :" << name << endl;
	cout << "Card Holder Address :" << address << endl;

}
;
