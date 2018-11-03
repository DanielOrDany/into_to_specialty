#include"Park.h"
Park::Park(){
	newName ="Stryjskyj";
	newAdress = "Lukasha_5";
	newBike_way_lenth = 1032;
	newTicket_price = 10.3;
	newFoundation_age = 1990;
	newRating = 9;
	newLakes = 0;
}
Park::Park(string name,
	string adress,
	int bike_way_lenth,
	double ticket_price,
	int foundation_age,
	int rating,
	int lakes) {
	newName = name;
	newAdress = adress;
	newBike_way_lenth = bike_way_lenth;
	newTicket_price = ticket_price;
	newFoundation_age = foundation_age;
	newRating = rating;
	newLakes = lakes;
}
Park::~Park() {

}
string Park::getName() const {
	return newName;
}
string Park::getAdress() const{
	return newAdress;
}
int Park::getBikeWayLenth() const {
	return newBike_way_lenth;
}
double Park::getTicketPrice() const {
	return newTicket_price;
}
int Park::getFoundationAge() const {
	return newFoundation_age;
}
int Park::getRating() const {
	return newRating;
}
int Park::getLakes() const {
	return newLakes;
}
void Park::setName(string name) {
	 newName = name;
}
void Park::setAdress(string adress) {
	 newAdress = adress;
}
void Park::setBikeWayLenth(int lenth) {
     newBike_way_lenth = lenth;
}
void Park::setTicketPrice(double price) {
	 newTicket_price = price;
}
void Park::setFoundationAge(int age) {
	 newFoundation_age = age;
}
void Park::setRating(int rating) {
	 newRating = rating;
}
void Park::setLakes(int lakes) {
	 newLakes = lakes;
}