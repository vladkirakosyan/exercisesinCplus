#include <iostream>

int main() {

	std::cout << "Enter 5 integer numbers to get the min and max values amount.\n";
	int arr[5];

	for (int i = 0; i < 5; i++) {
		std::cin >> arr[i];
	}
	int minValue = arr[0], maxValue = arr[0];
	for (int j = 0; j < 5; j++) {
		if (arr[j] > maxValue) maxValue = arr[j];
		if (arr[j] < minValue) minValue = arr[j];
	}
	std::cout << "min + max = " << minValue + maxValue << '\n';

	return 0;
}

// Մուտքագրել զանգվածի տարրերի արժեքները։ Տպել զանգվածի առավելագույն և
// նվազագույն արժեքների գումարը։