#include <iostream>
#include <string>

int main() {

	std::string num ;
	std::cout << "Enter an integer number\n";
	std::getline (std::cin, num);
	std::cout <<  "Num is: " << num << std::endl;
	for (int i = 0; i < num.length(); i++) {
		std::cout << "'"<< num[i] << "', ";
	}
	std::cout << std::endl;

	return 0;
}

// Մուտքագրել թիվ, տպել թվի թվանշանները առանձին առանձին էկրանին։ Օրինակ՝
// մուտքագրված 5479 թվի համար տպել ‘5’, ‘4’, ‘7’, ‘9’։