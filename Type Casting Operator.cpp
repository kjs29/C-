'Type Casting Operators' allow to convert a value of a given type to another type.
We use parenthesis '()'.
  
---example
//For example, if we want to convert float f int an integer.
#include <iostream>
using namespace std;
int main () { 
    float f = 3.14;
  
    //i has to be declared to an integer though.
    i = (int)f;
    cout<<i;
}

result :
3       //the remainder is lost.

  
---another example
#include <iostream>
using namespace std;
int main () {
  float f = 3.14;
  int i;
 
  i = int(f);           //instead of '(int)f' we can also write int(f)
  cout<<i;
  return 0;
}
