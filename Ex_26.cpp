#include <iostream>
#include <cmath>
double equation(int, int, int);
double x1, x2;

int main() {
	int a, b, c;
	std::cout << "Insert a, b, c values for quadratic equation.\n";
	std::cin >> a >> b >> c;
	equation(a, b, c);

	return 0;
}
double equation(int a, int b, int c) {
	double discriminant = (b * b) - 4 * a * c;
	std::cout << "Discriminant is " << discriminant << '\n';
	if (discriminant < 0)
		std::cout << "The equation has no roots, discriminant is lower than 0.\n";
	else if (discriminant == 0)
		std::cout << "X == " << ((-b) / 2 * a) << '\n';
	else if (discriminant > 0) {
		x1 = ((-b) - sqrt(discriminant)) / (2 * a);
		x2 = ((-b) + sqrt(discriminant)) / (2 * a);
		std::cout << "X1 == " << x1 << std::endl;
		std::cout << "X2 == " << x2 << std::endl;
	}
	return 0;
}

// Գրել ֆունկցիա, որը ստանում է քառակուսային հավասարման մուտքային տվյալները
// և վերադարձնում է լուծումը։ Կանչել և տպել ֆունկցիայի վերադարձրած արժեքը։