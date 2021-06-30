#include <iostream>
#include <string>

std::string ReversedText(std::string &text) {
	std::string reversedText;
	int len = text.length() - 1;

	for (int i = len; i >= 0; i--) {
		reversedText.push_back(text[i]);
	}
	return reversedText;
}
int main() {

	std::string someText;
	std::getline(std::cin,someText);

	std::cout << "New reversed string: " << ReversedText(someText)<< std::endl;

	return 0;
}

// Գրել ֆունկցիա, որը ստանում է տող և վերադարձնում տողի շրջված տարբերակը։