This evaluates an expression
Syntax of this ternary operator
(condition)? result1 : result2 ;
//If condition is true, it evaluates to result1, and if it is false, it evaluates to result2.
---


#include <iostream>

using namespace std;

int main () {
	int a,b,c;
	
	a = 5;
	b = 4;
	c = (a<b)? a:b ;
	cout<<c;
	return 0;
}

result : 
4           //a<b is false so it evaluates to b which is 4
