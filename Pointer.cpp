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
	
	//we are creating pointer variable for the memory address of age variable(There is always an asterisk when we declare a pointer)
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

---
//dereferencing a pointer(Getting the value)
#include  <iostream>
using namespace std;

int main() {
	
	int age = 29;
	int *pAge = &age;
	
	//dereferencing a pointer(Getting a value)
	cout << *pAge << "\n";
	
	//show the actual address of the pointer(Getting the address)
	cout << pAge << "\n" << &age;
	
	//dereferencing a pointer again(Getting the value)
	cout << *&age;
	return 0;
	
}


---example
#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	
	//declare an integer type data called age
	int age = 5;
	
	//address of the age (&)
	cout<<"address of the age : "<<&age<<"\n";
	
	//declare an int type pointer
	//for the address of the age (*)
	int* p_age = &age;
	
	//print out pointer which is &age
	cout<<"p_age : "<<p_age<<"\n";
	
	//print out the address of the pointer
	cout<<"address of the p_age : "<<&p_age;
	
	return 0;
}

---example
#include <iostream>
using namespace std;
int main () {
	
	int age = 5;
	int *p_age = &age;
	
	cout<<"What the pointer(p_age) is assigned to(In this case, the address of the variable 'age') : "<<p_age<<"\n";	//p_age = &age so it indicates the address of the 'age'.
	cout<<"What is included in the pointer p_age(the real value) : "<<*p_age<<"\n";				//value of the pointer
	cout<<"value of age(What the variable 'age' is assigned to) : "<<age<<"\n";
	cout<<"address of age (&age) : "<<&age<<"\n";
	cout<<"address of the pointer variable(p_age) : &p_age : "<<&p_age;
	return 0;
}

---example
// There are different types of pointers
//int pointer, float pointers, char pointers
//they exist to indicate (or point) different variables

#include <iostream>

using namespace std;
int main () {
	
	int a=5;
	
	printf("Integer size : %d\n",sizeof(int)); //size of integer
	printf("Float size : %d\n",sizeof(float)); //size of float
	printf("Char size : %d\n",sizeof(char));  //size of character
	printf("Integer pointer size : %d\n",sizeof(int*));	//size of integer pointer
	printf("Float pointer size : %d\n",sizeof(float*));	//size of float pointer
	printf("Character pointer size : %d\n",sizeof(char*));	//size of character pointer

	//let's make a pointer that indicates the address of the variable 'a'
	int* ptr = &a;			//&a indicates the address of 'a'
	
	//let's find out the address of variable 'a'
	printf("Address of a is %x\n", &a);
	
	//let's find out what this ptr indicates
	printf("What 'ptr' indicates is %x\n",ptr);
	
	//let's find out the 'value' of what 'ptr' indicates
	printf("Value of what 'ptr' indicates is %d\n", *ptr); 		//%d because it is an integer
	
	//the usage of asterisk.
	//1.to use pointer.
	//2. later..
	
	 
	return 0;
}
---example of swap
// Swap

#include <iostream>
using namespace std;

int swap (int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return 0;
}
int main () {
	
	int a=5;
	int b = 10;
	
	
	swap(&a,&b);
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	return 0;
}


---
// Character pointer

#include <iostream>
using namespace std;
int main () {
	
	//create an array called 'arr'.
	char arr[6] = {"Hello"};
	
	//Create a pointer variable called ptr that indicates the address of arr[0]
	char* ptr = &arr[0];
	
	//print out the value of what the pointer variable 'ptr' contains
	printf("%c\n",*ptr);
	
	//print out the value of the what the pointer variable 'ptr+1' contains.
	printf("%c\n",*(ptr+1));
	
	
	printf("%c\n",*(ptr+2));
	printf("%c\n",*(ptr+3));
	printf("%c",*(ptr+4));
	
	return 0;
}
	
