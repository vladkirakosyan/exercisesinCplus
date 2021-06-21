#include <iostream>

int main() {

		std::cout << "Enter 5 integer numbers to get the max value index.\n";
	int arr[5], minindex, minnumber;
	for (int i = 0; i < 5; ++i) {
		std::cin >> arr[i];
		if (i == 0) minnumber = arr[i];
		else if (minnumber > arr[i]) {
			minnumber = arr[i];
			minindex = i;
		}
	}
	std::cout << "minindex is " << minindex << '\n';
	return 0;
}

// Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել և տպել նվազագույն արժեքով
// տարրի ինդեքսը։