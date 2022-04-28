x+=1;
x++;
x=x+1;

All of these expressions above have the same meaning

---
//Difference between ++x and x++
#include <iostream>
using namespace std;

int main () {
  int a = 3;
  int b = 3;
  int addA;
  int addB;
  addA = ++a;
  addB = b++;
  cout << addA << "\n" << addB;
  return 0;
   
}

result : 
4
3
