#include"stdafx.h"
#include "Rating.h"

int Rating::GetRatings()
{
	return ratings;
}

void Rating::AddRatings(unsigned int NewRating)
{
	if (NewRating < 100 && NewRating > 0) //make sure that the new rating inquiry is from 100%
	{
		
		ratings = ((ratings*NoOfRatings) + NewRating) / (NoOfRatings+1);// the old rating is 97% after 10 rating attemps, and with a new attempt of 50% = ((97*10)+50)/10+1=92%
		NoOfRatings++;
	}
	else 
	{
		
			cout<<"Rating is out of range!" ;
	}
}

void Rating::PrintRAting()
{
	cout << "Rating :" << ratings;
	cout << "there was " << NoOfRatings << " times of rating!";
}

ostream & operator<<(ostream & output, Rating & b)
{
	output << "(" << b.ratings << " " << b.NoOfRatings << ")";
	return output;
}

istream & operator>>(istream & input, unsigned int b)
{
	// TODO: insert return statement here
}
