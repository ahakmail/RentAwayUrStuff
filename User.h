#include"stdafx.h"
#include<iostream>
#include<string>

#ifndef USER_H
#define USER_H


#include"Date.h"
#include"Rating.h"
#include"CardInfo.h"
using namespace std;
class User {
public:
	string GetUserName();
	CardInfo GetCridt();
	unsigned int GetUserId();
	Rating GetRating();
	Date GetUserDOB();
	void SetUserId(unsigned int ID);
	void  SetUserName(string name);
	void SetCridt(CardInfo x);//
	void addRating(unsigned int newrate);//
	
	void SetUserDOB(Date x);
private:
	unsigned int UserId;
	string UserName;
	Date UserDOB;
	CardInfo cridt;
	Rating rating;
};
#endif // !USER_H