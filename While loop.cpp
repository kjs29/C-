//Syntax for while is as follows

while (condition) {
	
	codeblock to be executed if condition is true
}


#include <iostream>

int i = 0;
while (i<5) {
	cout << i;
	i++;
}

---example

#include <iostream>
using namespace std;

int main () {
	int i = 0;
	while (i<5) {
		cout << i;
		i++;
	}
}

---example
//use break to get out of the while loop

#include <iostream>

using namespace std;

int main () {
	
	
	int number = 0;
	while (number <10) {
		
		cout << number;
		number++;
	if (number==6) {
		break;
	}
	}
	return 0;
}

---example(Guessing game)
//we let the user guess our secret number '15' and we give 3 chances.
#include <iostream>
using namespace std;

int main () {
	int guess;
	int realNumber = 15;
	int guessCount = 0;
	while (realNumber != guess && guessCount<3) {
		cout<<"Guess the number\n"<<"You have "<<3-guessCount<<" guess(es) : ";
		cin>>guess;
		guessCount++;
	}
	
	if(guess == realNumber){
		cout<<"Good job!";
		
	} else {
		cout<<"Sorry!";
	}	
	return 0;
}
