/*
Write a program that, given street number, street name, city name, state name,
and zip code, prints the address in the following format.

street-number, street, city, state zip-code

*/

#include <iostream>
#include <string>
using namespace std;
int main () {
	
	int streetNum;
	string streetName;
	string cityName;
	string zipCode;
	
	cout<<"Enter your street number : ";
	cin>>streetNum;
	cout<<"Enter your street name : ";
	cin>>streetName;
	cout<<"Enter your city name : ";
	cin>>cityName;
	cout<<"Enter your zipcode : ";
	cin>>zipCode;
	cout<<"Your address : "<<streetNum<<" "<<streetName<<" "<<cityName<<" "<<zipCode;
	return 0;
}
