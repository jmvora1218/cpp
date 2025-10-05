// C++ Program to show the syntax/working of Objects as a
// part of Object Oriented PProgramming
#include <iostream>
#include <cstring>
using namespace std;

class person {
	// class/data member 
	string name;
	int id;
	char *last_name;

public:

	//default constrictor // member function
	person() {
	}
	
	//parmeterized constrictor // member function
	person(string name,int id, char *last_name) : name(name),id(id) {
		this->last_name = new char[20];
		strcpy(this->last_name,last_name);
	}
	//user define copy constrictor  
	person(const person& p1) {
		this->last_name = new char[20];
		this->id = p1.id;
		this->name = p1.name;
		strcpy(this->last_name,p1.last_name);
	}

	//to get the details of private member 
	int getdetails() {
		int k;
		int j;
	std::cout << "Name = " << this->name <<"\n";
	std::cout << "Id= " << this->id <<"\n";
	std::cout << "last name " << this->last_name <<"\n";
	}
	
	//to test problem in default copy constrictor
	void modify() {
		this->last_name[0] = '\0';
	}
};

//default constructor 
//copy constructor 
/*
Person p2 = p1;

//copy assignment operator 
person p1,p2;
p2 = p1;
*/

int main()
{
	//int a;
	//stack segment (mmemory allocation)
	//person p1;
	//person p2;

	//dynamic allocation 
	//person p1 = new person;

	person p1(string("vivek"),55,"kumar"); // p1 is a objecti
	person p2(string("jay"),6, "vora");

	//
	//p1 = p2;
	person p3 = p2;

	p1.getdetails();

	p1.modify();

	p2.getdetails();

	//p1.id=1;
	//p1 -> vora
	//p2->  vora 
	return 0;
}

