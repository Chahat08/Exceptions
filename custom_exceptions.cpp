#include <iostream>

class MyException : public std::exception {
public:
	virtual const char* what() const noexcept {
		return "Something bad happened!";
	}
};

class Test {
public:
	void goesWrong() {
		throw MyException();
	}
};

int main() {

	Test test;

	try {
		test.goesWrong();
	}
	catch (MyException &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}