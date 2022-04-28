//In order to generate random numbers we need to have cstdlib header file.


//

#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	int randomNumber = RAND_MAX;
	cout<<randomNumber;
	return 0;
}
