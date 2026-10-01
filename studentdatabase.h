#ifndef STUDENTDATABASE_H
#define STUDENTDATABASE_H

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

struct Student
{
public:
    string name;
    int age;
    vector<string> courses;

    Student(const string &name, const int &age, const int size);



};


class StudentDatabase
{
public:


    vector<unique_ptr<Student>> students;

    void addStudent(unique_ptr<Student> student);
};

#endif // STUDENTDATABASE_H





