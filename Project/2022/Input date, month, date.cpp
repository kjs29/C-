/*
Question : 
If users put year, month, day
We want the program to print 

00YY.MM.DD

ex. 
users input :
22
5
2
result : 
0022.05.02
*/

#include <iostream>
using namespace std;
int main () {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);                    //in C++ we can use scanf
  printf("%04d.%02d.%02d",a,b,c);             //04d. means there are 4 digits, and the first any numbers are filled with zeros.
  return 0;
}
