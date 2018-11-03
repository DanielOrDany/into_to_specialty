#include<iostream>
#include<string>
#include"Park.h"

using namespace std;

int main() {

	string name[3];
	string adress[3];
	int bike_way_lenth[3];
	double ticket_price[3];
	int foundation_age[3];
	int rating[3];
	int lakes[3];

	
	for (int i = 0; i <= 2; i++) {
		cout << "Enter park name: ";
		cin >> name[i];
		cout << "Enter park adress: ";
		cin >> adress[i];
		cout << "Enter park bike way in meters: ";
		cin >> bike_way_lenth[i];
		cout << "Enter park ticket price: ";
		cin >> ticket_price[i];
		cout << "Enter park foundation age: ";
		cin >> foundation_age[i];
		cout << "Enter park rating: ";
		cin >> rating[i];
		cout << "Enter number of park lakes: ";
		cin >> lakes[i];
		cout << endl;
	}
	
	Park Park1(name[0],adress[0],bike_way_lenth[0],ticket_price[0],foundation_age[0],rating[0],lakes[0]);
	cout << "Name: " << Park1.getName() << endl;
	cout << "Adress: "<< Park1.getAdress()<<endl;
	cout << "Bike way in meters: "<< Park1.getBikeWayLenth()<<endl;
	cout << "Ticket price: "<< Park1.getTicketPrice()<<endl;
	cout << "Foundation age: " << Park1.getFoundationAge() << endl;
	cout << "Your rating: " << Park1.getRating() << endl;
	cout << "Number of lakes: " << Park1.getLakes() << endl<<endl;

	Park Park2(name[1], adress[1], bike_way_lenth[1], ticket_price[1], foundation_age[1], rating[1], lakes[1]);
	cout << "Name: " << Park2.getName() << endl;
	cout << "Adress: " << Park2.getAdress() << endl;
	cout << "Bike way in meters: " << Park2.getBikeWayLenth() << endl;
	cout << "Ticket price: " << Park2.getTicketPrice() << endl;
	cout << "Foundation age: " << Park2.getFoundationAge() << endl;
	cout << "Your rating: " << Park2.getRating() << endl;
	cout << "Number of lakes: " << Park2.getLakes() << endl<<endl;

	Park Park3(name[2], adress[2], bike_way_lenth[2], ticket_price[2], foundation_age[2], rating[2], lakes[2]);
	cout << "Name: " << Park3.getName() << endl;
	cout << "Adress: " << Park3.getAdress() << endl;
	cout << "Bike way in meters: " << Park3.getBikeWayLenth() << endl;
	cout << "Ticket price: " << Park3.getTicketPrice() << endl;
	cout << "Foundation age: " << Park3.getFoundationAge() << endl;
	cout << "Your rating: " << Park3.getRating() << endl;
	cout << "Number of lakes: " << Park3.getLakes() << endl<<endl;

	system("pause");

	return 0;
}