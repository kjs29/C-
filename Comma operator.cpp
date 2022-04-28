//comma operator is used to separate two or more expressions that are included where only one expression is expected.

#include <iostream>

using namespace std;

int main () {
	int a,b;
	a = (b=2,b+3);
	cout<<a<<"\n"<<b;
}
