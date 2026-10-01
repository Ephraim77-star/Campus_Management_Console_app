#include "studentdatabase.h"

Student::Student(const string &name,const int &age, const int size) : name(name), age(age), courses(size) {}

void StudentDatabase::addStudent(unique_ptr<Student> student){

    students.push_back(move(student));
}


