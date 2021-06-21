#include <iostream>
#include <string>

int main() {
	
	std::cout << "Enter an integer number: ";
	std::string number;
	std::getline(std::cin, number);
	int len = number.length(), max = 0, min = 9;
		
	for (int i = 0; i < len; i++) {
		// VALIDATION
		if (number[i] < 48 && number[i] != 45 || number[i] > 57) {
			std::cout << "It's not an integer number\n";
			break;
		}
		// GETTING MIN AND MAX
		if (min > number[i] - 48) min = number[i] - 48;
		if (max < number[i] - 48) max = number[i] - 48;
	}
	std::cout << "max is: " << max << '\n' << "min is: " << min;
	return 0;
}

// Մուտքագրել թիվ, տպել թվի թվանշանների առավելագույն և նվազագույն արժեքները։