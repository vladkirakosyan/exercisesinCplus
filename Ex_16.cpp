#include <iostream>

int main() {

	std::cout << "Enter 5 integer numbers to get the max value index.\n";
	int arr[5], maxindex, maxnumber;
	for (int i = 0; i < 5; ++i) {
		std::cin >> arr[i];
		if (i == 0) maxnumber = arr[i];
		else if (maxnumber < arr[i]) {
			maxnumber = arr[i];
			maxindex = i;
		}
	}
	std::cout << "maxindex is " << maxindex << '\n';
	
	return 0;
}

// Մուտքագրել զանգվածի տարրերի արժեքները։ Գտնել և տպել առավելագույն
// արժեքով տարրի ինդեքսը։