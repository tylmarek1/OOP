#pragma once
#include <iostream>
#include <string>
#include "subject.h"
#include "student.h"

class School
{
private:
	std::string name;

	//Sclass* tridy;
	//int tridy_count;
	//int tridy_limit;

	Subject* subjects;
	int subject_count;
	int subject_limit;

	//Teacher* teachers;
	//int teachers_count;
	//int teacher_limit;

	Student* students;
	int students_count;
	int student_limit;
public:
	School(std::string name, int tridy_limit, int subject_limit, int teacher_limit, int student_limit);
	~School();

	//int getTridyCount();
	int getSubjectCount();
	//int getTeacherCount();
	int getStudentCount();

	//Sclass getTrida(int id);
	Subject getSubject(int id);
	//Teacher getTeacher(int id);
	Student getStudent(int id);

	//void createTrida();
	void createSubject(int id, std::string name);
	//void createTeacher();
	void createStudent(int id, std::string name);
};