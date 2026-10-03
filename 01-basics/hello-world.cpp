/* So today we are going to begin our C++ journey, this is going to our lecture 1 in which we will write our source code alongside knowing codes line by line as having
a strong  base in programming language is neccessary if you want to be a good programmer and not be a script kiddy, so now we will print a simple text 
"HelloWorld" in our console window.
*/

#include<iostream> // Header file containing input output stream for input and output functions

using namespace std; // namespace used for overcoming name conflicts, acts like an empty container, std is the standard library present inside iostream file  containing cout, cin etc

int main() {
	std::cout << "Hello World";
	return 0;
}

// cout is the output stream object of class ostream used for displaying text in the console window, :: scope resolution operator used for accessing any identifiers, functions, classses inside any scope, << insertion operator.

/* Output : 
Hello World
--------------------------------
Process exited after 1.015 seconds with return value 0
Press any key to continue . . .
*/

/* The "#include" is the preprocessor directive, it tells the compiler to add the file declared inside <> which is present in the programme files of Dev C++ 
   application. The iostream file contains the standard input output codes, it contains classes and objects created from the class with the help of which
   we can show our output in the console window by output stream and can user input from keyboard to the IDE via input stream. [stream = path or through which data
   will travel].

   namsepace is also like an empty container, used for preventing name conflict (will be declared in details in our namespace lecture).
   
   int main() is the function from which our program execution start.

   cout is the output stream object created from the ostream class, which show out output in the console window.

   return 0 tells the compiler to stop executing our source code, if for the example we add the "return 0" statement before our cout then
   the program will stop executing there and our text will not be displayed.
*/
