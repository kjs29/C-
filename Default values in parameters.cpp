/*
There can be multiple parameters in functions.
Sometimes the number of arguments can be less than the actual number of parameters when the last parameters has default values set.
*/
#include<iostream>
using namespace std;
int addFive(int a, int b = 5){              //the default value has to come in the last parameter
    int result;
    result = a + b;
    return result;
}
int main () {

  cout<<addFive(100);                     //notice how there is only one parameter
  
  return 0;  
}

result : 
105
  
---example
//but if we put two arguments in the function we get different answer.
#include<iostream>
using namespace std;
int addFive(int a, int b = 5){
    int result;
    result = a + b;
    return result;
}
int main () {

  cout<<addFive(100,3);             //notice that there are two arguments in this function.
  
  return 0;  
}

result : 
103
