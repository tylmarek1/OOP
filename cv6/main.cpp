#include <iostream>
#include "school.h"

int main() {
	School *myschool = new School("skola", 0, 5, 0, 2);
	myschool->createSubject(1, "matika1");
	myschool->createStudent(1, "stud1");
	myschool->getStudent(1).addSubject(myschool->getSubject(1));

	std::cout << myschool->getStudent(1).getName() << " - " << myschool->getStudent(1).getSubject(1).getName() << std::endl;
	return 0;
}