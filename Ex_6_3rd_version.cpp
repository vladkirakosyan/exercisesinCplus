#include <iostream>
#include <string>

int main() {

	std::string someText;
	std::cin >> someText;

	std::string reversedText;

	for (int i = someText.length() - 1; i >= 0; i--) {
		reversedText.push_back(someText[i]);
	}
	std::cout << "Original string: " << someText << std::endl;
	std::cout << "New reversed string: " << reversedText << std::endl;

	return 0;
}

// Մուտքագրել օգտագործողի անունը և տպել էկրանին հակառակ հերթականությամբ։