// Variable is like an empty container of an user defined data type, used for storing data

#include<iostream>
#include<string> // string library used fort importing and using functions related to string variables

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

// endl is a new line function use to move the cursor to the next lline, you can also use "\n" instead
// sizeof function is used to get the size of any particular data type.

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
