//lotto program
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main () {
	srand ((unsigned int)time(0));
	int iLotto[45] = {}; //initialize and declare each element with 0s
	
	//Assign LottoNumbers from 1 to 45 
	for (int i= 0;i<45;i++){
		iLotto[i]=i+1;
	}
	
	/*swap
	int iNum = 1, iNum=2,iNum3;
	iNum3 = iNum1;
	iNum1 = iNum2;
	iNum2 = iNum3;*/
	
	//shuffle
	int iTemp, idx1, idx2;

	//we shuffle 100 times.
	for (int i=0;i<100;i++){
		idx1 = rand()%45;
		idx2 = rand()%45;
		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}
	
	for (int i =0; i<6; i++){
		cout<<iLotto[i]<<"\t\n";
	}
	cout<<"Bonus number : "<<iLotto[6];
	return 0;
}
