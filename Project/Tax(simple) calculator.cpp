/*
Write a program that calculates the sales tax of a transaction given the sale
amount. Assume that the tax is 9 percent. Use a constant to define the tax rate.
Run your program several times, each with different values for sale amount. Use
the following format for output.

Sale amount: …
Tax amount: …
Total amount due: …

*/

#include <iostream>
#include <string>
using namespace std;
int main () {
  const int taxRate = 9;
  double saleAmount;
  //double taxAmount = saleAmount*0.09;
  //double totalAmount = saleAmount - taxAmount;
  
  cout<<"Type your Sales amount : ";
  cin>>saleAmount;
  cout<<"Your tax is "<<taxRate<<"% and amount is "<<saleAmount*0.09<<"\n";
  cout<<"Your total amount is "<<saleAmount - (saleAmount*0.09);
  
  
  return 0;
}
