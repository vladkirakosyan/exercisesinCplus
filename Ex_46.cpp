#include <iostream>

int Display_array(int * arr1, int length) {
	while (length > 0) {
		std::cout << arr1[length - 1] << " ";
		return Display_array(arr1, length - 1);
	}
	return 0;
}

int main() {
	
	std::cout << "Input array from integer numbers consist of 5 elements.\n";
	int arr[5]{};
	for(int i = 0; i < 5; ++i)
		std::cin >> arr[i];

	Display_array(arr, 5);
	
	return 0;
}

// Գրել ֆունկցիա, որը ստանում է զանգված և տպում է զանգվածի տարրերը էկրանին
// ռեկուրսիվ տարբերակով։