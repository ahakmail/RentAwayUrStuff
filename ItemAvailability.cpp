#include"stdafx.h"
#include "ItemAvailability.h"
#include<iostream>
#include<string>
#include<array>
#include <vector>
#include <string>
#include <sstream>
ItemAvailability::ItemAvailability()
{
	int month;
	cout << "enter month";
	cin >> month;
	std::string str;
	getline(cin, str);
	std::stringstream ss(str);

	int i;

	while (ss >> i)
	{
		vect.push_back(i);

		if (ss.peek() == ',')
			ss.ignore();
	}

	for (i = 0; i< vect.size(); i++)
		std::cout << vect.at(i) << std::endl;
	

}
