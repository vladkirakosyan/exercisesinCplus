#include <iostream>

int Fib_index(int num) {
	int n1 = 0, n2 = 1;
	if (num < 2) return num;
	else {
		for (int i = 0; i < num; ++i) {
			int temp = n2;
			n2 = n1 + n2;
			n1 = temp;
		}
		return n1;
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

// Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա իտերատիվ տարբերակով։