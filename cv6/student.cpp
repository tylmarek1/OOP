#include "student.h"

Student::Student() {
	this->id = 0;
	this->name = "name";
	this->subjects = nullptr;
	this->subjects_count = 0;
}

Student::Student(int id, std::string name){
	this->id = id;
	this->name = name;
	this->subjects = nullptr;
	this->subjects_count = 0;
}

Subject Student::getSubject(int id) {
	return this->subjects[id];
}

int Student::getSubCount() {
	return this->subjects_count;
}

int Student::getId() {
	return this->id;
}

std::string Student::getName() {
	return this->name;
}

void Student::addSubject(Subject subject) {
	this->subjects[this->subjects_count] = subject;
	this->subjects_count++;
}