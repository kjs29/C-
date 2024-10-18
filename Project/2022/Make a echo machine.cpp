/*
Make an echo machine that repeats after whatever you say
until the user says "goodbye" and then echo machine stops.
*/
//echo machine
#include <iostream>
using namespace std;
int main () {
	
	string str;
	
	do
	{
	cout<<"Enter text : ";
	getline(cin,str);
	cout<<"You entered: "<<str<<"\n";
	} while (str!="goodbye");
	return 0;
}

result : 
Enter text : hello
You entered: hello
Enter text : how are you?
You entered: how are you?
Enter text : I asked first
You entered: I asked first
Enter text : stop copying me
You entered: stop copying me
Enter text : okay lol
You entered: okay lol
Enter text : goodbye
You entered: goodbye
