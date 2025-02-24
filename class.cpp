/*
In Object-Oriented Programming (OOP), private members of a class are designed to be accessible only within the class itself. 
The idea behind this is encapsulation, which ensures that the internal state of an object is protected and can only be modified 
through well-defined methods (often called getters and setters).

However, there are several ways to access private members in C++ (and other OOP languages) in different situations, including some 
techniques that break encapsulation in certain scenarios (although these should generally be avoided in most cases).

Let’s go through a few common ways to access private members:

1. Using Getter and Setter Methods (Recommended)
The best practice to access and modify private members is to use getter and setter methods. This preserves the principles of encapsulation
while still allowing external code to interact with the object's private data.
In this example, the private member make is accessed via the getMake() method, and the private member speed is modified via the setSpeed() method. 
These methods provide controlled access to the private data while keeping it encapsulated.

2. Friend Functions or Friend Classes (Less Common)
A friend function or friend class is allowed to access the private members of a class. This is a way to provide specific functions or 
other classes with special access to a class's private members, without making those members public.

3. Accessing Private Members Using Pointer or Reference (Bad Practice)
In some cases, you might use a pointer or reference to a class to access private members, 
although this is generally not recommended, as it can break the encapsulation principle.
While this can work, it's an unsafe practice and violates encapsulation. You should generally avoid using this method because it directly accesses
memory locations and can lead to undefined behavior or potential bugs.

4. Using #define to Access Private Members (Compiler Hack)
This is another hacky and unsafe way to access private members, and it should be strictly avoided. 
It involves using #define preprocessor macros to break the access control and directly access private members.

Why Use Encapsulation?
Encapsulation is one of the core principles of OOP, designed to hide the internal details of an object and expose only what is necessary. 
This ensures that the object’s state can only be modified or accessed in controlled ways, minimizing the risk of unexpected behavior or errors.
5. Why Not Just Make Everything Public?
Making all members public would defeat the purpose of object-oriented programming, where the idea is to:

Hide unnecessary implementation details.
Provide controlled access to the data.
Maintain the integrity of an object’s state by preventing external code from making arbitrary changes.
Conclusion:
The best practice for accessing private members in C++ is through getter and setter methods, ensuring controlled access to the internal state of an object.
Friend functions/classes can also be used when needed, though they should be used sparingly.
Accessing private members through pointers or direct manipulation should be avoided, as it violates the principles of 
encapsulation and can lead to maintenance issues and bugs.
*/

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    int speed;

public:
    // Constructor to initialize car
    Car(string m, int s) : make(m), speed(s) {}

    // Getter method for the make
    string getMake() {
        return make;
    }

    // Setter method for the speed
    void setSpeed(int s) {
        speed = s;
    }

    // Method to display car details
    void display() {
        cout << "Car Make: " << make << ", Speed: " << speed << endl;
    }
};

int main() {
    Car car1("Toyota", 100);

    // Accessing private members through getter and setter
    cout << "Car Make: " << car1.getMake() << endl; // Access private 'make'
    car1.setSpeed(120);  // Modify private 'speed'

    car1.display();  // Output: Car Make: Toyota, Speed: 120

    return 0;
}
