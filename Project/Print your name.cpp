/*
Write a program that, using a C++ string, prints your name in the format shown
below after being prompted to input your first and the last name. Note that the
last name should come before the first name as shown.

Your full name : lastname, firstname

*/
#include <iostream>
#include <string>
using namespace std;
int main () {
  string first;
  string last;
  cout<<"Your first name : ";
  cin>>first;
  cout<<"Your last name : ";
  cin>>last;
  cout<<"Your full name : "<<last<<", "<<first;
  
  return 0;
}
