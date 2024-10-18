++x;
x+=1;
x=x+1;

These expressions are the same.

---
//Difference between ++x and x++
#include <iostream>
using namespace std;
int main () {
	int a = 3;
	int b = 3;
	int addA;
	int addB;
	
	addA = ++a;
	addB = b++;
	cout << addA<< "\n"<< addB;
}
