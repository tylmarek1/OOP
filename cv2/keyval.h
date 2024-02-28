#include <iostream>

class KeyValue
{
private:
	int key;
	double value;
	KeyValue* next;
public:
	KeyValue(int k, double v) {
		this->key = k;
		this->value = v;
		this->next = nullptr;
	}
	~KeyValue() {
		if (this->next != nullptr) {
			delete this->next;
			this->next = nullptr;
		}
	}
	int GetKey() {
		return this->key;
	}
	double GetValue() {
		return this->value;
	}
	KeyValue* GetNext() {
		return this->next;
	}
	KeyValue* CreateNext(int k, double v) {
		this->next = new KeyValue(k, v);
		return this->next;
	}
};
