#include <iostream>
#include <string>

void exceptionThrowingFn() {
	bool error = false;

	if (error) {
		throw(1);
	}
	if (rand() % 2) {
		throw("Odd number");
	}
	else throw std::string("even number");

	std::cout << "Exiting exceptionThrowingFn" << std::endl;
}

void callingFn() {
	exceptionThrowingFn();
	std::cout << "Exiting callingFn" << std::endl;
}

int main() {
	srand(time(0));

	try {
		//exceptionThrowingFn();
		callingFn();
	}
	catch (int i) {
		std::cout << "Exception: " << i << std::endl;
	}
	catch (std::string& e) {
		std::cout << "Exception: " << e << std::endl;
	}
	catch (const char* e) {
		std::cout << "Exception: " << e << std::endl;
	}

	std::cout << "Exiting main" << std::endl;

	return 0;
}