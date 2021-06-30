#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
	int max = 0;
	char maxC = ' ';
	string str;
	getline(std::cin, str);
	
	map<char, int> m;
	map<char, int>::iterator itr;


	for (char i : str) {
		if (i == ' ') continue;
		m[i]++;
	}
	for (itr = m.begin(); itr != m.end(); ++itr) {
		if (max < itr->second) {
			max = itr->second;
			maxC = itr->first;
		}
	}
	cout << "max repeated char is " << maxC << " ,which is repeated " << max << " times" << endl;

	return 0;
}

// Մուտքագրել տող։ Գտնել և տպել տողում ամենաշատ կրկնվող սիմվոլը։