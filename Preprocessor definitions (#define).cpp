Another mechanism to name constant values is the use of preprocessor definitions.
#define identifier replacement

  
ex) #define pi 3.14159

  
 
  
---example
  
#include <iostream>
  
  using namespace std;
#define pi 3.14159
int main () {
  cout<< pi * pi;
  return 0;
}

result : 
9.85959
