/*
 So we will now begin our journey of lecture 2 in which we will know about variables and data types in C++, it is the very fundamental concept in the
 programming world. A variable is like an empty container used for storing data, it has a name which is also called "identifiers", note that variable names
 cannot be a keyword, its name should begin with any numbers like (1,2,3 etc), a variable should not begin with any special charecter like (@, #, $ etc).
 A data type on the other hand defines how much space in the memory a varibale will assign, there are mainly five premitive data types : int, float, double,
 char, boolean and string, each of them assign some defined space in the memory.
 */

#include<iostream>
#include<string> // string library used for importing and using functions related to string variables

using namespace std;

int main() {
	int x = 10; // whole number or integer without any decimal part
	float y = 10.5; // decimal number.
	double z = 12.5689; // more precised decimal number
	char w = 'A'; // charecter or a single letter
	std::string name = "Soham"; // an array of charecters
	bool isCoding = true; // boolean variable have two states: true(1) and false(0)
 	
	std::cout << "The size of integer is : " << sizeof(x) << " bytes." << std::endl; 
	std::cout << "The size of float is : " << sizeof(y) << " bytes." << std::endl;
	std::cout << "The size of double is : " << sizeof(z) << " bytes." << std::endl;
	std::cout << "The size of charecter is : " << sizeof(w) << " bytes." << std::endl;
	std::cout << "The size of string is : " << sizeof(name) << " bytes." << std::endl;
	std::cout << "The size of boolean is : " << sizeof(isCoding) << " bytes." << std::endl;
	
	return 0;
}

/*
Ouput : 

The size of integer is : 4 bytes.
The size of float is : 4 bytes.
The size of double is : 8 bytes.
The size of charecter is : 1 bytes.
The size of string is : 8 bytes. // in c++, std::string takes 8 bytes  spacce in the memory
The size of boolean is : 1 bytes.

--------------------------------
Process exited after 1.023 seconds with return value 0
Press any key to continue . . .
*/

/* endl is a new line function use to move the cursor to the next line, you can also use "\n" instead.
   sizeof function is used to get the size of any particular data type.
*/
