/*
draw tree star like this
   *
  ***
 *****
*******
*/


#include <iostream>
using namespace std;

int main () {
	for (int i = 0 ; i<4; i++){
		
		//for the whitespace
		for (int j = 0; j < 3-i; j++ ){
			cout<<" ";
		}
		//for the *
		for (int h = 0; h < 2*i + 1; h++){
			cout<<"*";
		}
		cout<<"\n";
		}
	return 0;
	
}
