#include"stdafx.h"
#include<iostream>
#include<string>
#include<array>
#include<array>
#include <vector>
#include <string>
#include <sstream>
#ifndef DATE_H
#define DATE_H

using namespace std;

class Date {
	
public:
	Date(int m = 1, int d = 1, int y = 1900);
	void setDate(int, int, int); 
	void PrintDate();
private:
	unsigned int month;
	unsigned int day;
	unsigned int year;
};

#endif // !DATE_H

