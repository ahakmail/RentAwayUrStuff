#include"stdafx.h"
#include "User.h"

string User::GetUserName()
{
	return string(UserName);
}

CardInfo User::GetCridt()
{
	return cridt;
}

unsigned int User::GetUserId()
{
	return UserId;
}

Rating User::GetRating()
{
	return rating;
}

void User::SetUserId(unsigned int ID)
{
	UserId = ID ;
}

void User::SetUserName(string name)
{
	UserName = name;
}

void User::SetCridt(CardInfo x)
{
	cridt = x;
}

void User::addRating(unsigned int newrate)
{
	rating.AddRatings(newrate);
	
}

Date User::GetUserDOB()
{
	return UserDOB;
}

void User::SetUserDOB(Date x)
{
	UserDOB = x;
	
}
