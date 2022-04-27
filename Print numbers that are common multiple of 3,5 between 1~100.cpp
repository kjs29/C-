//print numbers divisible by 3 and 5 between 1~100
#include <iostream>

using namespace std;
int main () {
	for (int a = 1; a<=100; a++){
		if(a%3==0 && a%5==0) {
			cout<<a<<"\n";
		}
	}
	return 0;
}

