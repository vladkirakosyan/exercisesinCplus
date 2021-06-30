#include <iostream>

unsigned int Factorial(unsigned int x) {
	if (x < 3) { 
		return x; 
	}
	else {
		return x * Factorial(x - 1);
	}
}

int main() {

	std::cout << "Insert integer number which is greater than 1 and " <<
		"lower than 13 to calculate factorial with recursion." << std::endl;

	int number = 0;
	std::cin >> number;
	std::cout << number << " != " << Factorial(number) << std::endl;

	return 0;
}

// Իրականացնել ֆակտորիալի հաշվարկումը ռեկուրսիվ եղանակով։