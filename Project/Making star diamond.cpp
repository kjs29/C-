/*
   *
  ***
 *****
*******
 *****
  ***
   *
draw diamond like this
*/

#include <iostream>
using namespace std;

//4 rows i, whitespace 3210 j,# of stars 1357 h
int main () {
	//4 iteration for i, we make i=0 because 0 might be easier to modify 'for' for j or h.
	for (int i=0;i<4;i++){
		
		for (int j = 0;j<3-i;j++){
			cout<<" ";
		}
		//4 iteration, each h goes like 1,3,5,7
		for (int h = 0; h <= i*2; h++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	
	//3 rows i, whitespace 123 j, # of stars 531 h
	
	//from the 5th row, there are 3 rows(3 iteration for i)
	for (int i = 0; i<=3; i++) {
		
		// whitespace increases like 1,2,3(3 iteration for j)
		for (int j = 0; j < i+1 ; j++) {
			cout<<" ";
		}
		//# of stars goes like 5,3,1 (3 iteration)
		for (int h = 5; h>2*i ; h--){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}
