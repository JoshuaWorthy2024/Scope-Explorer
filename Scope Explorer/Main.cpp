#include <iostream>

// Objective: Understand how variable scope affects program behavior.

int x = 0;

void testMethod() {
	int x = 10;

	std::cout << "Test Method X = " << x << std::endl;
}
int main() {
	int x = 5;

	std::cout << "Main Function X = " << x << std::endl;
	std::cout << "Global X = " << ::x << std::endl;

	testMethod();
}