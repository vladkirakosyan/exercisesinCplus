#include <iostream>

int main() {

	std::cout << "Insert integer number which is greater than 1 and " <<
		"lower than 13 to calculate factorial with recursion." << std::endl;
	int number = 0, mul = 1;
	std::cin >> number;

	if (number == 1)
		std::cout << "1 != 1" << std::endl;
	else if (number == 2) 
		std::cout << "2 != 2" << std::endl;
	else {
		std::cout << number;
		while (number > 1) {
			mul *= number--;
		}
		std::cout << " != " << mul << std::endl;
	}

	return 0;
}

// Իրականացնել ֆակտորիալի հաշվարկումը իտերատիվ եղանակով։