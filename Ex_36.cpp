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
	Student obj_3;
	std::cout << "Insert your Name, Surname, Age(integer), Subject name you are learning.\n"
		<< "But strictly save the order.\n";
	std::cin >> obj_1.name >> obj_1.surname >> obj_1.age >> obj_1.subj_name;

	std::cout << "Insert your freind's Name, Surname, Age(integer), Subject name he is learning.\n"
		<< "But strictly save the order.\n";
	std::cin >> obj_2.name >> obj_2.surname >> obj_2.age >> obj_2.subj_name;

	obj_3.name = obj_1.name;
	obj_3.surname = obj_2.surname;
	obj_3.age = (obj_1.age + obj_2.age) / 2;

	std::cout << "Obj3 name is " << obj_3.name << std::endl;
	std::cout << "Obj3 surname is " << obj_3.surname << std::endl;
	std::cout << "Obj3 age is " << obj_3.age << std::endl;


	return 0;
}

// Ստեղծել երկու Student օբյեկտներ, մուտքագրել արժեքները ըստ նախորդ
// խնդիրների։ Ստեղծել երրորդ օբյեկտը, որը կկառուցվի առաջին երկուսի հիման վրա։
// Որպես անուն օգտագործել առաջին օբյեկտի անունը, որպես ազգանուն երկրորդ
// օբյեկտի ազգանունը, որպես տարիք առաջին երկու օբյեկտների տարիքների միջին
// թվաբանականը։