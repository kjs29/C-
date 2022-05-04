#include <iostream>
#include <string>
using namespace std;

//create class
class School {
public:
	std::string name;
	int age;
	void banner(){
	std::cout << name << " is " << age << " years old.\n";
	}
};

int main () {
	School codecademy;
	codecademy.name = "Codecademy";
	codecademy.age = 10;
	codecademy.banner();
	
	School harvard;
	harvard.name = "Harvard";
	harvard.age = 200;
	harvard.banner();
	
	School yale;
	yale.name = "Yale";
	yale.age = 190;
	yale.banner();
	return 0;
}
