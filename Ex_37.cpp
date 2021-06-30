#include <iostream>
#include <string>

struct Point {
	double x_coord;
	double y_coord;
};

int main() {
	
	Point M;
	std::cout << "Insert x and y coordinates for M point" << std::endl;
	std::cin >> M.x_coord >> M.y_coord;
	
	return 0;
}

// Ստեղծել Point ստրուկտուրա, որը նկարագրում է կետը երկչափ հարթության վրա։
// Մուտքագրել արժեքներ։