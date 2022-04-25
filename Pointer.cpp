#include <iostream>

using namespace std;

int main () {
	int age = 29;
	double gpa = 3.1;
	string name = "Jin";
	
	
	//accessing memory address for 'age' variable. '&age' is a pointer
	cout << &age<<"\n";
  //accessing memory address for 'gpa' variable. '&gpa' is a pointer
	cout << &gpa<<"\n";
  //accessing memory address for 'name' variable. '&name' is a pointer
	cout << &name<<"\n";
	
	return 0;
}


---
#include <iostream>

using namespace std;

int main () {
	int age = 29;
	
	//we are creating pointer variable for the memory address of age variable
	int *pAge = &age;
	
	double gpa = 3.1;
	
	//we are creating a poineter variable for the memory address of gpa variable
	double *pGpa = &gpa;
	
	string name = "Jin";
	
	//we are creating a pointer variable for the memory address of name variable
	string *pName= &name;
	
	
	//accessing memory address for 'age' variable.
	cout << &age<<"\n";
  //accessing memory address for 'gpa' variable.
	cout << &gpa<<"\n";
  //accessing memory address for 'name' variable.
	cout << &name<<"\n";
	
	//if we want to access the address of the variable
	cout<< pAge;
	
	return 0;
}


