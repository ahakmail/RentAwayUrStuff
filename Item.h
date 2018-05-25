#include"stdafx.h"
#include<iostream>
#include<string>
#include"Date.h"
#include"CardInfo.h"
#include"User.h"


using namespace std;
class Item {
public:
	
	unsigned int GetItemID();
	void SetItemId(int ID);
	string GetItemInstruction();
	void SetItemInstruction(string instructions);
	Rating GetItemRating();
	string GetDesc();
	void SetDesc(string Desc);
	void addRating(unsigned int newrate);
	User GetOwner();
	void SetOwner(User Owner);
	void SetPrice(int NewPrice);
	int GetPrice();
	void SetSecurity(int NewSecurity);
	int GetSecurity();

private:

	unsigned int ItemId;
	string ItemInstruction;
	Rating ItemRating;
	string ItemDesc;
	int Price;
	int Security;
	User Owner;

};
