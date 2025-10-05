
Every Class by default has a constructor with same name as call, constructor is a member function which helps allocate the memory to the class objects(**member**).
When object is created constructor(methos ) automatically gets called.

*If we want's to assign a common value to a variable or member of different objects we can define it in the constructure …

We can create a construstructor manually . If we don’t compiler creates default for us

![[Pasted image 20250223194717.png]]


![[Pasted image 20250224121116.png]]

![[Pasted image 20250223194738.png]]


![[Pasted image 20250223194839.png]]


what is difference in copy constructor and assignment operator.
copy constructor: 


constructor overloading is an example of polymorphism:
Key points about constructor overloading and polymorphism:

- **Definition of polymorphism:**
    
    Polymorphism in object-oriented programming refers to the ability of an object to take on multiple forms, meaning a single method name can perform different actions depending on the context (like the arguments passed). 
    
- **How constructor overloading fits in:**
    
    When you have multiple constructors with different parameter lists in a class, the compiler determines which constructor to call based on the arguments you provide when creating an object, effectively exhibiting polymorphic behavior. 
    
- **Compile-time polymorphism:**
    
    Constructor overloading is considered compile-time polymorphism because the compiler decides which constructor to use based on the arguments provided at compile time.