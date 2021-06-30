#include <iostream>

int Fib_index(int num) {
	if (num < 2) return num;
	else {
		return Fib_index(num - 1) + Fib_index(num - 2);
	}
}
int main() {
	std::cout << "Insert index to get Fibonachi number.\n"
		<< "Starting from 0.\n";
	int number = 0;
	std::cin >> number;
	std::cout << "F(" << number << ") = " << Fib_index(number) << std::endl;

	return 0;
}

// Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա ռեկուրսիվ տարբերակով։