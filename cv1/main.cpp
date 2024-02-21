#include <iostream>
#include <cctype>

void fn1() {
	int small;
	int big;
	std::cout << "small: ";
	std::cin >> small;
	std::cout << "big: ";
	std::cin >> big;
	int result;
	for (int i = 0; i <= (big - small); i++)
	{
		result = (small + i) * (small + i);
		std::cout << result << std::endl;
	}
	return;
}


int fct(unsigned long num) {
	if (num <= 1) return 1;
	else return (num * fct(num - 1));
}


void fn2() {
	unsigned long num;
	std::cout << "fact num: ";
	std::cin >> num;
	int result = fct(num);
	std::cout << result << std::endl;
}


void fn3() {
	char word[21];
	std::cout << "word: ";
	std::cin >> word;
	int count = 0;
	for (int i = 0; i < strlen(word); i++)
	{
		if (isupper(word[i])) {
			count++;
			word[i] = tolower(word[i]);
		}
	}
	std::cout << word << std::endl;
	std::cout << count << std::endl;
	return;
}


void ctverec(int x) {
	for (int i = 0; i < x; i++)
	{
		for (int y = 0; y < x; y++)
		{
			std::cout << "x";
		}
		std::cout << std::endl;
	}
}


class Osoba {
	char jmeno[20];
	char prijmeni[20];
	int vek;

	void predstaveni() {
		std::cout << "Ahoj,já jsem " << jmeno << " " << prijmeni << " a mám " << vek << " let." << std::endl;
	}
};



int main() {

	//fn1();
	//fn2();
	//fn3();
	int x;
	std::cin >> x;
	ctverec(x);

	return 0;
}