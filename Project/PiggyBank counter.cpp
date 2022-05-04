/*
You suddenly need money
so today you decided to open your piggy banks.
Create a program to count all the coins to show in dollar amount you have in total
*/
#include <iostream>
using namespace std;
int main () {
	//defining constants
	const unsigned int pennyValue = 1;
	const unsigned int nickelValue = 5;
	const unsigned int dimeValue = 10;
	const unsigned int quarterValue = 25;
	const unsigned int dollarValue = 100;
	
	//defining variables
	unsigned int pennies;
	unsigned int nickels;
	unsigned int dimes;
	unsigned int quarters;
	unsigned int dollars;
	
	//defining total value
	unsigned long totalValue;
	
	//inputting number of different coins
	cout<<"Enter the number of pennies : ";
	cin>>pennies;
	cout<<"Enter the number of nickels : ";
	cin>>nickels;
	cout<<"Enter the number of dimes : ";
	cin>>dimes;
	cout<<"Enter the number of quarters : ";
	cin>>quarters;
	cout<<"Enter the number of dollars : ";
	cin>>dollars;
	
	totalValue = pennies*pennyValue + nickels*nickelValue + dimes*dimeValue +quarters*quarterValue + dollars*dollarValue;
	
	
	cout<<"Total value is "<<totalValue<<" pennies\n";
	cout<<"That is equivalent to "<< (double)totalValue/100 <<" Dollars.";
	
	
	return 0;
}
