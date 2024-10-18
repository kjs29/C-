/*
Inline functions put inline in front of the declaration
WHY?
because calling a function cause a certain overhead(stacking arguments, jumps,etc..)
so for the short functions, we are encouraged to put inline in front of the declaration of the functions.
*/

#include <iostream>
using namespace std;
inline void hello(int a){         //inline is inserted in the beginning
	cout<<a;
}
int main () {
	hello(22);
	return 0;
}

result : 
22
