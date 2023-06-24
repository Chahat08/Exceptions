#include <iostream>

class CanGoWrong {
public:
	CanGoWrong() {
		int* arr = new int[99999999999];
		//int* arr = new int[999];
		delete[] arr;
	}
};

int main() {
	try {
		CanGoWrong wrong;
	}
	catch (std::exception& ex) {
		std::cout << "Exception caught: " << ex.what() << std::endl;
	}
	catch (std::bad_alloc& ex) {
		std::cout << "Exception: " << ex.what() << std::endl;
	}

	std::cout << "Still running" << std::endl;

	return 0;
}