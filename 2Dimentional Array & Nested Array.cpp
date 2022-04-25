//2Dimentional Array
#include <iostream>
using namespace std;

int main () {
	//we must specify the numbers inside the []
	int numberGrid[3][2] = {
							{1,2},
							{3,4},
							{5,6}
						 };
	cout<< numberGrid[2][0];
	return 0;
}

---
//Nested Array

//2Dimentional Array
#include <iostream>
using namespace std;

int main () {
	//we must specify the numbers inside the []
	int numberGrid[3][2] = {
							{1,2},
							{3,4},
							{5,6}
						 };
	for (int i=0;i<3;i++){
		for (int j=0;j<2;j++){
			cout<<numberGrid[i][j]<<"\n";
		}
		
	}
	
	return 0;
}
