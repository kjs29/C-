/*Syntax for functions are as follows
type name ( arguments ) { statements }

Functions require to declare the type.
But 'void' is used when we don't need to return a value.  
*/

#include <iostream>
using namespace std;
void sayToTheWorld() {
    cout<<"Hello! I am going to become a genius coder!";
}
int main () {
    sayToTheWorld();
    return 0; 
}

result :
Hello! I am going to become a genius coder!
  
---example
// we can also write like this.
#include <iostream>
using namespace std;
void sayToTheWorld(void) {                                //notice that within parenthesis there is void. which means that this function doesn't require parameters.
    cout<<"Hello! I am going to become a genius coder!";
}
int main () {
    sayToTheWorld();
    return 0; 
}

result :
Hello! I am going to become a genius coder!
