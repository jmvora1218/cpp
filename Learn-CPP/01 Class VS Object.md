[https://www.youtube.com/watch?v=EGVfVnreI4A&ab_channel=PankajSirAcademyTraining](https://www.youtube.com/watch?v=EGVfVnreI4A&ab_channel=PankajSirAcademyTraining)

>> Class is a factory which generate/give object.

>> Non-Static member will be part of object.
>
>method is a member function in class 

```
class MyClass {       // The class Name with "MyClass"
  public:                   // Access specifier
    int myNum;        // Attribute/member (int variable)
    string myString;  // Attribute/member (string variable)
};

int main() {
	MyClass myObj;  // Create an object of MyClass // memory referance of the object

	// Access attributes and set values
	myObj.myNum = 15;
	myObj.myString = "Some text";
  
	// Print attribute values
	cout << myObj.myNum << "\n";
	cout << myObj.myString;

  return 0;
}
```