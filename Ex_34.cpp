#include <iostream>
#include <string>

struct Student {
	std::string name;
	std::string surname;
	int age;
	std::string subj_name;
};

int main() {
	
	Student obj;
	std::cout << "Insert your Name, Surname, Age(integer), Subject name you are learning.\n"
		<< "But strictly save the order.\n";
	std::cin >> obj.name >> obj.surname >> obj.age >> obj.subj_name;
	
	return 0;
}

// Ստեղծել Student ստրուկտուրա, որը պարունակում է անուն, ազգանուն, տարիք,
// առարկաների անվանումներ։ Ստեղծել ստրուկտուրայի օբյեկը, մուտքագրել
// անդամների արժեքները։