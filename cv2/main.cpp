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

void nextlevel(int curlevel, Tree1 *curtree, int maxlevel) {
	if (curlevel = maxlevel) return;
	curlevel++;
	nextlevel(curlevel, curtree->CreateNext1(curlevel, "ahoj"), maxlevel);
	nextlevel(curlevel, curtree->CreateNext2(curlevel, "ahoj"), maxlevel);
}

void ukol2() {
	Tree1* tr1 = new Tree1(0, "ahoj");
	int level = 0;
	nextlevel(level, tr1, 5);
	Tree1* tr = tr1;
	Tree1* trh;
	for (int i = 0; i < 5; i++)
	{
		std::cout << tr->GetValue() << std::endl;
		trh = tr->GetNext1();
		tr = trh;
	}
}

int main() {
	ukol1();
	ukol2();
	return 0;
}