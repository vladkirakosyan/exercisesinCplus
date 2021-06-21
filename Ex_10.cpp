#include <iostream>

int main() {	
	int number;
	std::cin >> number;
	double t = number % 1000;
	std::cout << number / 1000 << '.' << t << " km\n";

	return 0;
}

// Մուտքագրել թիվ, որը ներկայացնում է հեռավորությունը՝ չափված մետրերով։
// Վերածել և տպել արժեքը կիլոմետրերով։ Օրինակ՝ մուտքագրված 1400 թվի դեպքում
// տպել “1.4 km”։