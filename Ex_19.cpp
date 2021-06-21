#include <iostream>

int main() {

	std::cout << "Enter 5 integer numbers to get reversed array.\n";
	int arr[5];

	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
	}
	
	for (int j = 4; j >= 0; j--) {
		std::cout << arr[j] << ' ';
	}
	
	return 0;
}

// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի տարրերը հակառակ
// հերթականությամբ։