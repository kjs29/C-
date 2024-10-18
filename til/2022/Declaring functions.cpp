/*
We must declare the functions first and call them
Or at least we must declare the prototypes of the functions.
*/

//Let's declare the prototype of the functions.
#include <iostream>
using namespace std;

//declare the prototype of a function
int prototype(int);         //we can use int in parameter instead of defining the name of the parameter
                            //but naming the parameters improves the legibility of the declaration.

int main () {
  int a; 
  cin>>a;
  //calling the function
  prototype(a);
  return 0;
}

//Declaring the function.
int prototype (int b){       
    cout<<b<<" is the number you entered."; 
}

result :
user : 5
5 is the number you entered.
