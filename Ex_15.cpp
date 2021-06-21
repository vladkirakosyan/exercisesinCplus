#include <iostream>
#include <bitset>

int main() {

	std::cout << "Insert integer number.\n";
	short insNumber = 0;
	std::cin >> insNumber;

	std::bitset<16>BitsetNum = insNumber;
	std::cout << "Number in binary is " << BitsetNum << std::endl;

	return 0;
}

// Մուտքագրել թիվ, փոխակերպել թիվը երկուական համակարգի թվի և տպել
// արդյունքը։