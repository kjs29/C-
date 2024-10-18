#include <iostream>

using namespace std;

class Student {
	public :
		string name;
		string major;
		int gpa;
		Student (string aName, string aMajor, int aGpa) {
			name = aName;
			major = aMajor;
			gpa = aGpa;
			
		}
  //object functions here. It is cool to create functions here so that we can check if each student has honors.
		bool hasHonors() {
			if(gpa >= 3.5) {
				return true;
			}
			return false; 
		}
};

int main () {
	Student student1 ("Jin","Computer Science", 1231123);
	
	cout <<student1.hasHonors();
	
	return 0;
}

result : 
1 //1 means true. 0 means false.
