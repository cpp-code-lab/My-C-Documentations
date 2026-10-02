#include<iostream>
#include<string>

using namespace std;

int main() {
	int age;
	std::cout << "Enter your age : ";
	std::cin >> age;
	std::cout << "Your age is : " << age << " years." << std::endl;
	
	double height;
	std::cout << "Enter your height : ";
	std::cin >> height;
	std::cout << "Your height is : " << height << "cm." << std::endl;
	
	cin.ignore();
	
	std::string name;
	std::cout << "Enter your name : ";
	getline(cin, name);
	std::cout << "Your name is : " << name;
	
	return 0;
}

// cin is the input stream object found made from class istream, declared inside iostream, used for taking user input data from input hardwares like keyboard and >> insertion operator

/* getline() is a function used to read the whole line of text, we should use getline() rather than cin while taking string as input because if we while writing 
   the input we give any space then the >> will stop reading the text before the space and our user input will be imcomplete, rather getline() function read the 
   whole line and thus we can get our user input string data as output complete in the console screen
*/

/* use cin.ignore before taking user input of string because when you enter the height data and press Enter key, a new line charecter is created, which is tsored inside the string variable
   when the getline function see it, rather use the ingore function to remove unwanted charecter from input buffer
*/

/*
Output : 

Enter your age : 20
Your age is : 20 years.
Enter your height : 160.7
Your height is : 160.7cm.
Enter your name : Soham Sharma
Your name is : Soham Sharma
--------------------------------
Process exited after 17.3 seconds with return value 0
Press any key to continue . . .
*/
