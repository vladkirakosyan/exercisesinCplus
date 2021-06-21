#include <iostream>

int main() {
	char name[20];
	std::cout << "Enter your name\n";
	std::cin >> name;
	std::cout << "These letters are vowels in English: " 
		<< "A, E, I, O, U, and sometimes Y.\n";
	std::cout << "Your name without vowels is: ";
	for (int i = 0; i < 19; i++) {
		if (name[i] >= 65 && name[i] <= 90) {
			if (name[i] != 65 && name[i] != 69 && name[i] != 73
				&& name[i] != 79 && name[i] != 85 && name[i] != 89)
					std::cout << name[i];
		}
		if (name[i] >= 97 && name[i] <= 122)
			if (name[i] != 97 && name[i] != 101 && name[i] != 105
				&& name[i] != 111 && name[i] != 117 && name[i] != 121)
					std::cout << name[i];
	}

	std::cout << std::endl;
	return 0;
}

// Մուտքագրել օգտագործողի անունը և հեռացնել բոլոր ձայնավորները։ Արդյունքը
// տպել էկրանին։
//enter username and remove english vowels