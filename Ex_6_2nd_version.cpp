#include <iostream>
#include <string>

int main() {

	std::cout << "Enter your name\n";
	std::string yourName;
	std::cin >> yourName;
	std::cout << "Your name reversed is: ";
	int len = yourName.length();
	int n = len - 1;
	int i = 0;

	while (i <= n) {
		//Using the swap method to switch values at each index
		std::swap(yourName[i], yourName[n]);
		n = n - 1;
		i = i + 1;
	}

	std::cout << yourName << std::endl;

	return 0;
}

// Մուտքագրել օգտագործողի անունը և տպել էկրանին հակառակ հերթականությամբ։