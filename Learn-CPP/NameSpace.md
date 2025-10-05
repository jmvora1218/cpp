

# The need for Namespace

Consider a situation, we are writing some code that has a function called abc() and there is another predefined library available which is also having same function abc(). Now at the time of compilation, the compiler has no clue which version of abc() function we are referring to within our code.

To overcome this difficulty namespace is designed and is used as additional information to differentiate similar functions, variables, classes, etc. with the same name available in different libraries. Using namespace, we can define the context in which names are defined. In essence, a namespace defines a scope.

All C++ standard library types and functions are declared in the std namespace or namespaces nested inside std thus it is widely used in most of the programs.

## Defining a Namespace

To define namespace we start with the keyword namespace followed by the namespace name as follows:

|   |   |
|---|---|
|1<br><br>2<br><br>3<br><br>4<br><br>5<br><br>6|namespace namespace_name<br><br>{<br><br>   int a, b; // code declarations where<br><br>             // a and b are declared in<br><br>             // namespace_name's scope<br><br>}|

## Points to remember while defining a Namespace

- Namespace declarations appear only at global scope.
- Namespace declarations don’t have access specifiers.
- Namespace declarations can be nested within another namespace.
- No need to give semicolon after the closing brace of the definition of the namespace.
- Namespace definition can be split over several units.

|   |   |
|---|---|
|1<br><br>2<br><br>3<br><br>4<br><br>5<br><br>6<br><br>7<br><br>8<br><br>9<br><br>10<br><br>11<br><br>12<br><br>13<br><br>14<br><br>15<br><br>16<br><br>17<br><br>18<br><br>19<br><br>20<br><br>21<br><br>22<br><br>23|#include <iostream><br><br>using namespace std;<br><br>namespace first_function {<br><br>   void func() {<br><br>      cout << "Inside first_function" << endl;<br><br>   }<br><br>}<br><br>namespace second_function {<br><br>   void func() {<br><br>      cout << "Inside second_function" << endl;<br><br>   }<br><br>}<br><br>int main () {<br><br>   // Calls function from first name space.<br><br>   first_function::func();<br><br>   // Calls function from second name space.<br><br>   second_function::func();<br><br>   return 0;<br><br>}<br><br>Using Namespace in C++<br><br>There are three ways to use a namespace in the program,<br><br>1. The using directive<br>2. The using-declaration<br>3. Scope Resolution Operator (::)<br><br>From <[https://www.edureka.co/blog/namespace-in-cpp/](https://www.edureka.co/blog/namespace-in-cpp/)>|
