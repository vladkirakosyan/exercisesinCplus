#include <iostream>
using namespace std;

void prime_nums(int num){
	if (num == 1) {
		cout << "1 is a unique number\n";
		return;
	}
	if (num < 1) {
		cout << "Next time insert positive number\n";
		return;
	}
	for (int i = 2; i < num; ++i) {
		if (num % i == 0) {
			cout << num << " is not prime\n";
			return;
		}
	}
	cout << "finally!  " << num << "  is prime\n";
}

int main(){
	cout << "Insert positive number, to check whether number is Prime or not\n";
	int input_num = 0;
	cin >> input_num;
	prime_nums(input_num);
	
	return 0;
}

// Գրել ֆունկցիա, որը ստանում է թիվ և վերադարձնում true, եթե թիվը պարզ է։