#include <iostream>
#include <exception>

void goesWrong() {
	bool error1 = true;
	bool error2 = false;

	if (error1) throw std::bad_alloc();
	if (error2) throw std::exception();
}

int main() {
	// be carefull to catch exceptions with subclasses before with parent classes

	try {
		goesWrong();
	}
	catch (std::exception& e) {
		std::cout << "Catching exception: " << e.what() << std::endl;
	}
	catch (std::bad_alloc& e) {
		std::cout << "Catching bad alloc: " << e.what() << std::endl;
	}

	return 0;
}