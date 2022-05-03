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
	
	
	swap(a,b);
	cout<<"a = "<<a<<"\n";
	cout<<"b = "<<b<<"\n";
	return 0;
}

//on line 19, the value of a and b are also swapped even if we don't put & before a and b. WHY?
