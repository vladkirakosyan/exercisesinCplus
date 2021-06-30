#include <iostream>
#include <string>

struct Student {
	std::string name;
	std::string surname;
	int age;
	std::string subj_name;
};

int main() {
	
	Student obj_1;
	Student obj_2;
	std::cout << "Insert your Name, Surname, Age(integer), Subject name you are learning.\n"
		<< "But strictly save the order.\n";
	std::cin >> obj_1.name >> obj_1.surname >> obj_1.age >> obj_1.subj_name;

	std::cout << "Insert your freind's Name, Surname, Age(integer), Subject name he is learning.\n"
		<< "But strictly save the order.\n";
	std::cin >> obj_2.name >> obj_2.surname >> obj_2.age >> obj_2.subj_name;

	std::cout << "Elder one between you and your freind is ";
	if (obj_1.age > obj_2.age)
		std::cout << obj_1.name << std::endl;
	else std::cout << obj_2.name << std::endl;

	return 0;
}

// Ստեղծել երկու Student օբյեկտներ, մուտքագրել արժեքները ըստ նախորդ խնդրի։
// Տպել այն ուսանողի անունը, ով մեծ է տարիքով։