// C++ program to illustrate 
// Reference Derived Type 

#include <iostream> 
using namespace std; 

int main() 
{ 
	int jay = 10; 

	// Reference Derived Type 
	// ref is a reference to x. 
	int& vorasahab = jay; 
	jay = 60;
	cout << "vorasahab = " << vorasahab << endl; 
	// Value of x is now changed to 20 
	vorasahab = 20; 
	cout << "jay = " << jay << endl; 


	// Value of x is now changed to 30 
	jay = 30; 
	cout << "vorasahab = " << vorasahab << endl; 

	return 0; 
} 
