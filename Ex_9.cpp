#include <iostream>
#include <string>

int main() {
	std::string arr;
	std::cout << "Enter some text\n";
	std::getline(std::cin, arr);
	int len = arr.length();
	for (int i = 0; i < arr.length(); i += 2) {
		if (arr[i] >= 97 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
	}
	std::cout << arr << std::endl;
	
	return 0;
}

// Մուտքագրել տող։ Տողի ամեն երկրորդ սիմվոլը դարձնել մեծատառ։ Արդյունքը տպել
// էկրանին։