#pragma once
#include<iostream>
#include<string>
using namespace std;
#ifndef PARK_H
#define PARK_H
class Park {
public:
	string newName;
	int newFoundation_age;
	//--------------------
	Park();
	Park(string name,
		string adress,
		int bike_way_lenth,
		double ticket_price,
		int foundation_age,
		int rating,
		int lakes);
	~Park();
	//----------------------
	string getName() const;
	string getAdress() const;
	int getBikeWayLenth() const;
	double getTicketPrice() const;
	int getFoundationAge() const;
	int getRating() const;
	int getLakes() const;

	void setName(string);
	void setAdress(string);
	void setBikeWayLenth(int);
	void setTicketPrice(double);
	void setFoundationAge(int);
	void setRating(int);
	void setLakes(int);
protected:
	int newRating;
	int newLakes;
private:
	string newAdress;
	int newBike_way_lenth;
	double newTicket_price;
};
#endif PARK_H