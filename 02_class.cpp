// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented PProgramming
#include <iostream>
using namespace std;

class person {
	char name[20];
	int id;

public:
	int getdetails() {
			//std::cout << "Print " << id;
	return id;
	}
	
};

int main()
{

	person p1; // p1 is a objecti
	//p1.id=1;
//	std::cout << "Print " << p1.id;
	//std::getdetails << "Print " << getdetails();
	cout << "Print " << p1.getdetails();
	return 0;
}

