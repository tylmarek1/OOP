#include <iostream>
#include "keyval.h"
#include "tree1.h"

void ukol1() {
	KeyValue* kv1 = new KeyValue(0, 1);
	KeyValue* kv = kv1;
	KeyValue* kvh;
	int length = 10;
	for (int i = 1; i < length; i++)
	{
		kvh = kv->CreateNext(i, 1);
		kv = kvh;
	}
	kv = kv1;
	for (int i = 0; i < length; i++)
	{
		std::cout << kv->GetKey() << std::endl;
		kvh = kv->GetNext();
		kv = kvh;
	}
	return;
}



void ukol2() {
	Tree1* tr1 = new Tree1(0, "Je to zvire?");
	Tree1* tr11 = tr1->CreateNext1(11, "Je to savec?");
	Tree1* tr111 = tr11->CreateNext1(111, "Je to prase?");
	Tree1* tr112 = tr11->CreateNext2(112, "Je to had?");

	Tree1* tr12 = tr1->CreateNext2(12, "Je to kamen?");
	Tree1* tr121 = tr12->CreateNext1(121, "Je to strom?");
	Tree1* tr122 = tr12->CreateNext2(122, "Je to zula?");

	char answer;
	std::cout << tr1->GetValue() << std::endl;
	std::cout << "(Y/N): ";
	std::cin >> answer;
	std::cout << std::endl;
	if (answer == 'Y') {
		std::cout << tr11->GetValue() << std::endl;
		std::cout << "(Y/N): ";
		std::cin >> answer;
		std::cout << std::endl;
		if (answer == 'Y') {
			std::cout << tr111->GetValue() << std::endl;
			std::cout << "(Y/N): ";
			std::cin >> answer;
			std::cout << std::endl;
			if (answer == 'Y') {
				std::cout << "je to prase..." << std::endl;
			}
			else {
				std::cout << "je to pes..." << std::endl;
			}
		}
		else {
			std::cout << "je to had..." << std::endl;
		}
	}
	else {
		std::cout << tr12->GetValue() << std::endl;
		std::cout << "(Y/N): ";
		std::cin >> answer;
		std::cout << std::endl;
		if (answer == 'Y') {
			std::cout << "je to kamen..." << std::endl;
		}
		else {
			std::cout << tr121->GetValue() << std::endl;
			std::cout << "(Y/N): ";
			std::cin >> answer;
			std::cout << std::endl;
			if (answer == 'Y') {
				std::cout << "je to strom..." << std::endl;
			}
			else {
				std::cout << "je to kytka..." << std::endl;
			}
		}
	}
}

void printouttree(Tree1* tr, int max, int cur) {
	if (cur > max) return;
	for (int i = 0; i < cur; i++) std::cout << "....";
	std::cout << tr->GetKey() << " - " << tr->GetValue() << std::endl;
	printouttree(tr->GetNext1(), max, cur + 1);
	printouttree(tr->GetNext2(), max, cur + 1);
}


int main() {
	//ukol1();
	//ukol2();
	Tree1* tr1 = new Tree1(0, "Je to zvire?");
	Tree1* tr11 = tr1->CreateNext1(11, "Je to savec?");
	Tree1* tr111 = tr11->CreateNext1(111, "Je to prase?");
	Tree1* tr112 = tr11->CreateNext2(112, "Je to had?");

	Tree1* tr12 = tr1->CreateNext2(12, "Je to kamen?");
	Tree1* tr121 = tr12->CreateNext1(121, "Je to strom?");
	Tree1* tr122 = tr12->CreateNext2(122, "Je to zula?");

	printouttree(tr1, 2, 0);
	return 0;
}