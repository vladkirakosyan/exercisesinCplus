#include <iostream>

int main() {
	char name[20];
	std::cout << "Enter your name\n";
	std::cin >> name;
	std::cout << "Your name reversed is: ";
	for (int i = 18; i >= 0; i--) {
		if (name[i] >= 65 && name[i] <= 90)
			std::cout << name[i] ;
		if (name[i] >= 97 && name[i] <= 122)
			std::cout << name[i];
	}

	std::cout << std::endl;
	return 0;
}

// Մուտքագրել օգտագործողի անունը և տպել էկրանին հակառակ հերթականությամբ։