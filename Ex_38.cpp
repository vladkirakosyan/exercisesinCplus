#include <iostream>
#include <string>

struct Point {
	double x_coord;
	double y_coord;
};
struct Line{
	double arr[2];
};

int main() {
	
	Point M;
	Line M1;
	std::cout << "Insert x and y coordinates for M point" << std::endl;
	std::cin >> M.x_coord >> M.y_coord;

	M1.arr[0] = M.x_coord;
	M1.arr[1] = M.y_coord;

	return 0;
}

// Ստեղծել Line ստրուկտուրա, որը բաղկացած է Point օբյեկտների զանգվածից և
// նկարագրում է ուղիղ գիծ։