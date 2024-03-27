#pragma once
#include <iostream>
#include <string>
#include "subject.h"

class Student
{
private:
	int id;
	std::string name;

	Subject* subjects;
	int subjects_count;
public:
	Student();
	Student(int id, std::string name);
	int getId();
	std::string getName();
	Subject getSubject(int id);
	int getSubCount();
	void addSubject(Subject subject);
};
