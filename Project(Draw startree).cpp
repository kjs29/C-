/*draw tree star like this
*
**
***
****
*****
*/

#include <iostream>
using namespace std;
int main (){
	for (int i = 1;i<=5;i++){
		for ( int j = 1; j <= i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}

---
  
/*draw tree star like this
*****
****
***
**
*
*/
#include <iostream>
using namespace std;

int main (){
	
	int i,j;
	
	for (i = 5; i>=1; i--){
		for (j = 1; j <= i; j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
