#include <iostream>

int main() {
	int mul = 1, num, res;
	std::cout << "Enter an integer number\n";
	std::cin >> num;
	std::cout << "The product of digits of the number is: ";

	while (num > 1) {
		res = num % 10;
		mul *= res;
		num = num / 10;
	}

	std::cout << mul << std::endl;
	return 0;
}

// 4: Մուտքագրել թիվ, տպել էկրանին թվի թվանշանների արտադրյալը։