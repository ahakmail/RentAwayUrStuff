#include"stdafx.h"
#include <iostream>
#include"User.h"
#include"Item.h"

using namespace std;

void CallItem();
void Calluser();
User ahmed;
Item Fan;
int main()
{
	Calluser();
	CallItem();
	
	int s; cin >> s;
}
void CallItem(){

	cout << "let's add an Item\n";
	// entering the id for the item
	cout << "enter ID: ";
	int id;
	cin >> id;
	Fan.SetItemId(id);
	//adding a Descreption 
	string Desc;
	getline(cin, Desc);
	Fan.SetDesc(Desc);
	cin.ignore(1000, '\n'); //flushing the iostream

	//adding a rating
	cout << "lets add a rating to the item itself\n";
	int rating;
	cin >> rating;
	Fan.addRating(rating);

	//adding a security deposit
	cout << "lets add a Security deposit to the item itself\n";
	int Security;
	cin >> Security;
	Fan.SetSecurity(Security);

	//adding a price
	cout << "lets add a price deposit to the item \n";
	int price;
	cin >> price;
	Fan.SetPrice(price);
	
	//linking the user with the item owner
	Fan.SetOwner(ahmed);

	//adding a Descreption 
	string Instruction;
	
	getline(cin, Instruction);
	Fan.SetDesc(Instruction);
	cin.ignore(1000, '\n'); //flushing the iostream
	Fan.SetItemInstruction(Instruction);

	//printing Item information 
	cout << endl; cout<<Fan.GetSecurity();
	cout << endl; 
	cout << "ITem Rating: ";  
	Fan.GetItemRating().PrintRAting();
	cout << endl; cout<<Fan.GetPrice();
	cout << endl; cout<<Fan.GetOwner().GetUserName();
	cout << endl; cout<<Fan.GetItemInstruction();
	cout << endl; cout<<Fan.GetItemID();
	cout << endl; cout << Fan.GetDesc();
	Rating w;
	cout << w;
}
void Calluser()
{
	//Creating a class user 
	// this section sets the name of the user
	std::cout << "let's create a user! enter name : "<<endl;
	string name;
	std::getline(std::cin, name);
	ahmed.SetUserName(name);
	//cin.ignore();
	// this section sets the ID of the user
	cout << "enter ID: "<<endl;
	unsigned int id;
	cin >> id;
	ahmed.SetUserId(id);
	
	// this section sets the DOB of the user
	std::cout << "enter BOD0 like:02/02/1992 : " << endl;
	Date DOB ;
	string date;
	int month;
	int year;
	int day;
	date = "05/10/2000";
	cin >> date;
	month = stoi(date.substr(0, 2));
	day = stoi(date.substr(3, 2));
	year = stoi(date.substr(6));
	DOB.setDate(month, day, year);
	ahmed.SetUserDOB(DOB);
	// this section sets the Card information or the payment of the user
	CardInfo Defaultc;
	Defaultc.SetCard();
	ahmed.SetCridt(Defaultc);
	
	// this section will add a rating to the user
	unsigned int rating;
	cout << "add rating to the user: must be from 0 to 100: "<<endl;
	cin >> rating;
	ahmed.addRating(rating);
	// this section will print the user information
	cout <<"User Name: "<< ahmed.GetUserName() << endl;
	cout <<"User ID: "<< ahmed.GetUserId() << endl;
	ahmed.GetCridt().PrintINFO();
	cout << "User DOB: "; ahmed.GetUserDOB().PrintDate();
	cout << "User Rating: "; ahmed.GetRating().PrintRAting();
	
}
