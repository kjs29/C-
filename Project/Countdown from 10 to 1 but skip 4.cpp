/*
Count down from 10 to 1
But skip 4
Use continue;
*/

#include <iostream>
using namespace std;
int main () { 
    for(int i= 10; i>0; i--){
        if(i==4){
            continue;       //The continue statement skips the rest of the loop in the current iteration, and it makes the program go to the start of the next iteration.
        }
    cout<<i<<"\n";
    }
}

result : 
10
9
8
7
6
5
3
2
1
