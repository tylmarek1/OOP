#pragma once

class Subject {
private:
	int id;
	std::string name;
public:
	Subject(int id, std::string name) {
		this->id = id;
		this->name = name;
	}
	int getId() {
		return this->id;
	}
	std::string getName() {
		return this->name;
	}
};