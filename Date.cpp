#include"stdafx.h"
#include "Date.h"
#include <iostream>
#include <string>
#include<array>
using namespace std;

// Date constructor
Date::Date(int month, int day, int year) {
	setDate(month, day, year);
}

// set month, day and year
void Date::setDate(int mm, int dd, int yy) {

	if (dd >= 1 && dd<= 31) {
		day = dd;
	}
	else {
		cout << "Month must be 1-31";
	}
	if (mm >= 1 && mm <= 12) {
		month = mm;
	}
	else {
		cout<<"Month must be 1-12" ;
	}

	if (yy >= 1900 && yy <= 2100) {
		year = yy;
	}
	else {
		cout<< "Year must be >= 1900 and <= 2100" ;

	}


}


void Date::PrintDate()
{
	cout << endl << "DOB:"<<endl<<"Month" << month << "/"<<day<<"/"<<year<<endl;

}


