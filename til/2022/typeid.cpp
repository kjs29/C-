/*
type conversion
typeid (expression).name()
the tool returns an abbreviation of the type
(i for int, d for double, and so on)
*/

#include <iostream>
//to use this tool, we should include <typeinfo> header file
#include <typeinfo>
using namespace std;
int main () {
	bool x = true;
	char y = 'a';
	short z = 14;
	float t = 24.5;
	
	cout<<"Type of x + 100: "<<typeid(x+100).name()<<"\n";            //type is integer
	cout<<"Value of x + 100: "<<x+100<<"\n";
	cout<<"Type of y + 1000: "<<typeid(y+1000).name()<<"\n";          //type is integer
	cout<<"Value of y + 1000: "<<y+1000<<"\n";
	cout<<"Type of z * 100: "<<typeid(z*100).name()<<"\n";            //type is integer
	cout<<"Value of z * 100: "<<z*100<<"\n";
	cout<<"Type of t + 15000.2: "<<typeid(t+15000.2).name()<<"\n";    //type is double
	cout<<"Value of t + 15000.2: "<<t+15000.2<<"\n";
	return 0;
}


---
/*
hierarchy of types for implicit conversion
highest level to lowest level

long double
double
unsigned long
long
unsigned int
int
*/
