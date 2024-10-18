//let user type a random number and find the divisors of the number.

//if a random number is 100, divisors of the 100 would be like 2,50,4,25,5,20,10
#include <iostream>
using namespace std;
int main () {
	//a is a random number
	int randomNum,i;
	cout<<"Enter a random number : ";
	cin>>randomNum;
	for (i = 1; i<=randomNum; i++){
		if(randomNum%i==0){
			cout<<i<<"\n";
		}
	}
	return 0;
}
