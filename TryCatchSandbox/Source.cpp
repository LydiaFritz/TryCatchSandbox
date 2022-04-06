#include <iostream>
#include <vector>
#include <fstream>

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

	return 0;
}