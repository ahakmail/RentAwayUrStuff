#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Rating {

public:
	int GetRatings();
	void AddRatings(unsigned int NewRating);
	void PrintRAting();
	friend ostream& operator<<(ostream& output,Rating& b);								//output opertor
	friend istream& operator>>(istream& input,unsigned int b);

private:
	unsigned int NoOfRatings=0;
	unsigned int ratings=0;
};
