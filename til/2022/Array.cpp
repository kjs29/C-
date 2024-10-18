//Definition
Arrayes allow us to create multiple variables at once.
These variables are assigned in specific place.

//how many bytes usually go in each block of memory	
int = 4 bytes
float = 4 bytes
double = 8 bytes

//initialization
int arrayName [10];

//if we don't initialize specific values, garbage values go in there
#include <iostream>
using namespace std;
int main () {
	int hello[10];
	cout<<hello[5];
}
result:

//this is the garbage value that has been stored in those arrays that we didn't assign values.
4199721
---
Syntax for creating array(Arrays can contain only the same data type.)
int arrayName [size] = {element1, element2, element3 };


---example
//we can assign elements.
#include <iostream>
using namespace std;

int main () {
	
	int primeYear[5] = {2022, 2023, 2024, 2025, 2026};
	
	cout << primeYear[0];
	
	return 0;
}


---example
//we can initialize arrays without assigning elements.
#include <iostream>

using namespace std;

int main () {
	
	int primeYear[5];
	
	cout << "Your prime years will be : \n"; 
	cout<<primeYear[0];
	for (int i = 0;i<5;i++) {
	
		primeYear[i] = 2022 + i;
		cout << primeYear[i] <<"\n";
	}
	
	return 0;
}
---
	
//we can assign '0' in all index position in an array
#include <iostream>
using namespace std;
int main () {
	
	int helloArray[5]= {};
	cout<<helloArray[0]<<"\n";
	cout<<helloArray[1]<<"\n";
	cout<<helloArray[2]<<"\n";
	cout<<helloArray[3]<<"\n";
	cout<<helloArray[4]<<"\n";
	cout<<helloArray[5]<<"\n";
	
	return 0;
}

result:
0
0
0
0
0
0
---
//we can also give value of '0' to other indexes in an array
#include <iostream>
using namespace std;
int main () {
	
	//this means hello[0],hello[1],hello[2] are assigned 1,2,3 and the rest indexes are assigned '0'.
	int hello[5] = {1,2,3};
	
	
	//to find out
	cout<<hello[0];
	cout<<hello[1];
	cout<<hello[2];
	cout<<hello[3];
	cout<<hello[4];
	cout<<hello[5];
	return 0;
}

result:
123000
---
//we can also initialize an array without specifying the size of an array
#include <iostream>
int main () {
    int primeYear[] = {2022,2023,2024,2025};
    for (int a = 0; a < 4; a++) {
        std::cout << primeYear[a]<<"\n";
    }
    return 0;
}

---
//size of an array
#include <iostream>

int main () {
  int primeYear[]={2022,2023,2024,2025,2026};
  std::cout << sizeof(primeYear);
  return 0;
}

result : 
20      //the reason why we get 20 is that 
---
//To get the number of elements in the array we can write codes like this

#include <iostream>

int main () {
    int primeYear[]={2022,2023,2024,2025,2026};
    std::cout<< sizeof(primeYear)/sizeof(int);
return 0;
}

---
//Creating a multidimensional arrays
//2D array means there are 2 [][], 3D array has 3[][][]
//Coordinates.
/*

string letters[2][4]; 		//this one is to declare multidimensional array without giving vaues. All we know is there are 8 garbage value assigned.

string letters[2][4] = {	//this one is to declare multidimensional array assigning values. We know what the values are, and there are 8 of them.
{"a","b","c","d"},
{"e","f","g","h"}
}
*/
---
//when we want to print all individual values in multidimentional arrays we can use double 'for.
#include<iostream>
using namespace std;
int main () {
	//There are 100 values assigned all 0, except for hello[0][1],hello[1][0],hello[1][1]
	int hello[10][10] = {{1},{5,3}};
	for (int i=0;i<10;i++){
		for(int j =0;j<10;j++){
			cout<<hello[i][j];
		}
	}
	return 0;
}

result:
1000000000530000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
	
---example
#include <iostream>
int main () {
	std::string letters[2][4] = {
	{"a","b","c","d"},
	{"e","f","g","h"}
	};
	for (int a=0;a<2;a++){
		for (int b = 0; b<4; b++){
			std::cout << letters[a][b];
		}
	
	}
	
	return 0;
}

result:
abcdefgh
