#include"stdafx.h"
#include "Item.h"

unsigned int Item::GetItemID()
{
	return ItemId;
}

void Item::SetItemId(int ID)
{
	ItemId = ID;
}

string Item::GetItemInstruction()
{
	return ItemInstruction;
}

void Item
::SetItemInstruction(string instructions)
{
	ItemInstruction = instructions;
}

Rating Item::GetItemRating()
{
	return ItemRating;
}

string Item::GetDesc()
{
	return ItemDesc;
}
void Item::SetDesc(string Desc)
{
	ItemDesc = Desc;
}
void Item::addRating(unsigned int newrate)
{
	ItemRating.AddRatings(newrate);

}

User Item::GetOwner()
{
	return Owner;
}

void Item::SetOwner(User Owner)
{
	this->Owner = Owner;
}

void Item::SetPrice(int NewPrice)
{
	Price = NewPrice;
}

int Item::GetPrice()
{
	return Price;
}

void Item::SetSecurity(int NewSecurity)
{
	Security = NewSecurity;
}

int Item::GetSecurity()
{
	return Security;
}
