//Arguments passed by value
int x=5,y=3,z;
z = addition (x,y);

In this case function is passed 5 and 3, which are copies of x and y, respectively.

If we try to change the value of x and y within the function has no effect on the values of the varaibles x and y outside of the function.

  
//Arguments passed by reference
In certain casese it is useful to access an external variable from within a function. To do that,
arguments can be passed by reference, instead of by value.

---example
#include <iostream>
using namespace std;
void duplicate (int& a, int& b, int&c){
	a*=2;
	b*=3;
	c*=4;
}

int main () {
	int x=1,y=3,z=7;
	duplicate(x,y,z);
	cout<<x<<"\n"<<y<<"\n"<<z;
	return 0;
}
