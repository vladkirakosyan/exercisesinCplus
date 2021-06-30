#include <iostream>

void f1(int num){
	while (num > 0) {
		std::cout << num << " ";
		--num;
	}
}
int main() {
	std::cout << "Insert positive number.\n";
	int number = 0;
	std::cin >> number;
	f1(number);

	return 0;
}

// Գրել ֆունկցիա, որը որպես արգումենտ ստանում է num ամբողջ տիպի
// փոփոխականը և տպում է num - ից մինչև 0 արժեքները։ 
// ֆունկցիան իրականացնել իտերատիվ տարբերակով։