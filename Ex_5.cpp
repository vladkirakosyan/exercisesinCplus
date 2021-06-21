#include <iostream>

int main() {
	int num1, num2, result;
	char arithOperation;
	
	std::cout << "Enter 2 integer numbers\n";
	std::cin >> num1 >> num2;
	std::cout << "Enter arithmetioc operation: ";
	std::cin >> arithOperation;
	switch (arithOperation) {
	case '+': {
		result = num1 + num2;
		break;
	}
	case '-': {
		result = num1 - num2;
		break;
	}
	case '*': {
		result = num1 * num2;
		break;
	}
	case '/': {
		result = num1 / num2;
		break;
	}
	default: std::cout << "It's not an arithmetic operation\n";
		break;
	}

	std::cout << "The result is: (" << num1 << ") "
		<< arithOperation << " ("
		<< num2 << ") = " << result << std::endl;

	return 0;
}

// Ստեղծել հաշվիչ ծրագիր, որը մուտքագրում է երկու թվեր և գործողության սիմվոլը։
// Օրինակ՝ 4, 5 և ‘ + ’։ Կատարել համապատասխան թվաբանական գործողությունը
// թվերի հետ ըստ մուտքագրված գործողության սիմվոլի և տպել արդյունքը էկրանին։