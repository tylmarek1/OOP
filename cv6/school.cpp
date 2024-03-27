#include "school.h"

School::School(std::string name, int trlimit, int sublimit, int telimit, int stlimit) {
	this->name = name;

	//this->tridy_limit = trlimit;
	//this->tridy = new Sclass[trlimit];
	//this->tridy_count = 0;

	//this->subject_limit = sublimit;
	//this->subjects = new Subject[sublimit];
	//this->subject_count = 0;

	//this->teacher_limit = trlimit;
	//this->teachers = new Teacher[trlimit];
	//this->teachers_count = 0;

	this->student_limit = stlimit;
	this->students = new Student[stlimit];
	this->students_count = 0;
}

//int School::getTridyCount() {
//	return this->tridy_count;
//}
int School::getSubjectCount() {
	return this->subject_count;
}
//int School::getTeacherCount() {
//	return this->teachers_count;
//}
int School::getStudentCount() {
	return this->students_count;
}

//Sclass School::getTrida(int id) {
//	return this->tridy[id];
//}
Subject School::getSubject(int id) {
	return this->subjects[id];
}
//Teacher School::getTeacher(int id) {
//	return this->teachers[id];
//}
Student School::getStudent(int id) {
	return this->students[id];
}

void School::createSubject(int id, std::string name) {
	this->subjects[this->subject_count] = Subject(id, name);
	this->subject_count++;
}
void School::createStudent(int id, std::string name) {
	this->students[this->students_count] = Student(id, name);
	this->students_count++;
}