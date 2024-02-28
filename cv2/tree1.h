#include <iostream>
#include <string>

class Tree1
{
private:
	int key;
	std::string value;
	Tree1* next1;
	Tree1* next2;
public:
	Tree1(int k, std::string v) {
		this->key = k;
		this->value = v;
		this->next1 = nullptr;
		this->next2 = nullptr;
	}
	~Tree1() {
		if (this->next1 != nullptr) {
			delete this->next1;
			this->next1 = nullptr;
		}
		if (this->next2 != nullptr) {
			delete this->next2;
			this->next2 = nullptr;
		}
	}
	int GetKey() {
		return this->key;
	}
	std::string GetValue() {
		return this->value;
	}
	Tree1* GetNext1() {
		return this->next1;
	}
	Tree1* GetNext2() {
		return this->next2;
	}
	Tree1* CreateNext1(int k, std::string v) {
		this->next1 = new Tree1(k, v);
		return this->next1;
	}
	Tree1* CreateNext2(int k, std::string v) {
		this->next2 = new Tree1(k, v);
		return this->next2;
	}
};
