#include <iostream>
using namespace std;
int main () {
  //define constant variable pi
  const double pi = 3.14159;
  
  //define a variable radius
  double radius;
  
  //get input for radius of a circle from users
  cin>>radius;
  
  //get the perimeter of a circle
  double perimeter = 2* pi * radius;
  
  //get the area of a circle
  double area = pi*radius*radius;
  
  cout<<"perimeter : "<<perimeter<<"\narea :"<<area;
  return 0; 
}
