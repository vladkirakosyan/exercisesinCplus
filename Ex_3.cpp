#include <iostream>

int main() {
	int sum = 0, num, res;
	std::cout << "Enter an integer number\n";
	std::cin >> num;
	std::cout << "The sum of the digits of the number is: ";

	while (num > 0) {
		res = num % 10;
		sum += res;
		num = num / 10;
	}
	
	std::cout << sum << std::endl;
	return 0;
}

// Մուտքագրել թիվ, տպել թվի թվանշանների գումարը էկրանին։ Օրինակ՝
// մուտքագրված 5479 թվի համար տպել 25 (որովհետև 5 + 4 + 7 + 9 = 25)։