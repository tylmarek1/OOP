#include <iostream>
#include <string>

class Client
{
private:
	int code;
	std::string name;
public:
	Client(int c, std::string n) {
		code = c;
		name = n;
	}
	int GetCode() {
		return code;
	}
	std::string GetNAme() {
		return name;
	}
};
