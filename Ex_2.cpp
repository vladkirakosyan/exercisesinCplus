#include <iostream>
#include <string>

int main() {

	std::string num;
	std::cout << "Enter an integer number\n";
	std::getline (std::cin, num);
	std::cout <<  "Num is: " << num << std::endl;
	int len = num.length();

	std::cout << "Reversed number is:\t";
	for (int i = len; i >= 0; i--) {
		std::cout << num[i];
	}
	std::cout << std::endl;

	return 0;
}

// Մուտքագրել թիվ, տպել թվի թվանշանները հակառակ հերթականությամբ։