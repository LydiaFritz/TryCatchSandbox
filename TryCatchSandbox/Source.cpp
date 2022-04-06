#include <iostream>
#include <vector>
#include <fstream>

#include "Header.h"

int main() {

	/*
	* An exception is thrown by using the throw keyword from inside the try block. 
	* Exception handlers are declared with the keyword catch, which must be placed 
	* immediately after the try block
	* source: https://www.cplusplus.com/doc/tutorial/exceptions/
	*/
	try {
		throw 20;
	}
	catch (int e) {
		std::cout << e << " was thrown\n";
	}

	/*
	* Multiple handlers (i.e., catch expressions) can be chained; each one with a different 
	* parameter type. Only the handler whose argument type matches the type of the exception 
	* specified in the throw statement is executed.
	* If an ellipsis (...) is used as the parameter of catch, that handler will catch any 
	* exception no matter what the type of the exception thrown. 
	* This can be used as a default handler
	*/
	try {
		throw ("red");
	}
	catch (int e) {
		std::cout << e << " was thrown\n.";
	}
	catch (char c) {
		std::cout << c << " was thrown\n";
	}
	catch (...) {
		std::cout << "some other exception\n";
	}

	/*
	* Type of the exceptions thrown by dynamic_cast when it fails the run-time check 
	* performed on references to polymorphic class types.
	* The run-time check fails if the object would be an incomplete object of 
	* the destination type.
	* Its member what returns a null-terminated character sequence identifying the exception.
	*/

	try
	{
		A a;
		//note this is the address-of operator
		//the * operator will not compile.
		C& cptr = dynamic_cast<C&>(a);
	}
	catch (std::bad_cast& bc)
	{
		std::cerr << "bad_cast caught: " << bc.what() << '\n';
	}

	//bad access
	std::vector<int> vec;
	vec.push_back(2);
	vec.push_back(3);
	try
	{
		std::cout << vec.at(3) << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

	