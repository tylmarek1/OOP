#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "teacher.h"

class Sclass {
private:
	int id;
	std::string name;

	Student* students;
	int student_count;

	Teacher* teacher;

public:
	Sclass ();
	~Sclass ();
};