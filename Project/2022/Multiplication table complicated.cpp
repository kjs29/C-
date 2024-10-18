/*
print multiplication table but,
2's 3's 4's
5's 6's 7's
8's 9's 10's
it should look like this
*/




//First we have to find out how many rows we should have(3), and what are the rules for the first numbers of each rows(2,5,8) and then we can assign it 'i'.

//Next we have to find out the rules in each row. It seems like it increases 1 in each row. 2,3,4/ 5,6,7/ 8,9,10

#include <iostream>
using namespace std;
int main () {
  for (int i = 2/*It starts at 2*/; i<9/*this shows how many rows we can have*/;i+=3/*it increases by 3 (2,5,8)*/){
    
    //j is for making muliples of each numbers. Like 2*(1) = 2, 2*(2) = 4, ... 5*(9) = 45. The numbers in the bracket is for 'j'.
    for (int j = 1; j<=9; j++){
      //now time to draw multiplication table of 2s,3s,4s
      cout<<i<<"*"<<j<<"="<<i*j<<"\t"/*'\t' is for the tab*/;
      
      //we can add +1 to 'i' to implement multiplication table for 3s, 6s, 9s. Because i is 2,5,8.
      cout<<i+1<<"*"<<j<<"="<<(i+1)*j<<"\t"/*'\t' is for the tab*/;
      
      //we can add another +2 'i' to implement multiplication table for 4s,7s,10s.
      cout<<i+2<<"*"<<j<<"="<<(i+2)*j<<"\n";
    }
    cout<<"\n";
  }
  return 0;
}
