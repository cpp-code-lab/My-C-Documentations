#include<iostream>

 using namespace std;
 
 int main() {
 	bool isCodingfun = true; // will return 1
 	bool isStudying = false; // will return 0
 	std::cout << isCodingfun << std::endl;
 	std::cout << isStudying << std::endl;
 	
 	std::cout << boolalpha;
 	std::cout << isCodingfun << std::endl;
 	std::cout << isStudying << std::endl;
 	
 	std::cout << noboolalpha;
 	std::cout << isCodingfun << std::endl;
 	std::cout << isStudying << std::endl;
 	
 	return 0;
 }
 
// boolaplpha and noboolalpha are the malnipulators that change the display value of cout, here boolaplpha changes the value of boolean 0 and 1 to true and false and the task of noboolaplha is vice versa

/* 
Output : 

1
0
true
false
1
0

--------------------------------
Process exited after 1.021 seconds with return value 0
Press any key to continue . . .
*/
