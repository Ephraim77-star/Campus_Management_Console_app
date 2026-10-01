#ifndef STUDENTREPORT_H
#define STUDENTREPORT_H


#include <iostream>

#include "studentdatabase.h"

using namespace std;

class Report
{
public:
    virtual void generate(const StudentDatabase& sdb) = 0;
    Report() {}

    virtual ~Report() = default;
};

class StudentReport : public Report
{
public:

    void generate(const StudentDatabase& sdb) override {

        for(const unique_ptr<Student> &student : sdb.students ){

            cout << "Student name: " << student->name << endl;
            cout << "Student age: " << student->age << endl;

        }
    }
};

class CourseReport : public Report
{
public:

    void generate(const StudentDatabase& sdb) override{

        for(const unique_ptr<Student> &student : sdb.students ){

            cout << "Student name: " << student->name << endl;
            cout << "Student courses: " << endl;

            for (int i = 0; i < student->courses.size(); ++i) {
                cout << student->courses[i] << endl;
            }

        }
    }
};

#endif // STUDENTREPORT_H
