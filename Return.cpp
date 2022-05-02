/*
All functions with a return type shall end with a proper return statement that includes a return value, even if it is never used.
Except Main() functions.
When main() functions end without any return values, compiler assumes that the function ends with an implicit return statement = return 0;
*/

---
/*
when main returns zero explicity
*/
#include <iostream>
using namespace std;
int main () {
    cout<<"Hello World!";
    return 0;
}

---
/*
when main returns zero implicitly
*/
#include <iostream>
using namespace std;
int main () {
    cout<<"Hello World!";
                            //Notice that there is no return statement. But compiler assumes that the return value is 0 anyways for historical reasons.
}


---
  
/*
SO what does it mean when main function ends with a return value of zero?

It means that the program was successful.
*/
