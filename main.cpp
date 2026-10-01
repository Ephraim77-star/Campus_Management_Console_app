#include <iostream>
#include <memory>
#include "studentdatabase.h"
#include "studentreport.h"

using namespace std;

void printReport(Report& report,StudentDatabase& db){

    report.generate(db);
}

int main()
{

    StudentDatabase db;
    StudentReport sr;
    CourseReport cr;

    unique_ptr<Student> s1(new Student("Attah Ephraim U", 17, 4));
    unique_ptr<Student> s2 (new Student("Eze Chika E", 18, 4));
    unique_ptr<Student> s3 (new Student("Ozor Divine O", 17, 4));
    unique_ptr<Student> s4 (new Student("Onah Samson S", 17, 4));
    unique_ptr<Student> s5 (new Student("Agu Kamsi I", 18, 4));


    db.students.push_back(std::move(s1));
    db.students.push_back(std::move(s2));
    db.students.push_back(std::move(s3));
    db.students.push_back(std::move(s4));
    db.students.push_back(std::move(s5));

    for (auto &s : db.students) {

        s->courses[0] = "English";
        s->courses[1] = "Mathematics";
        s->courses[2] = "Physics";
        s->courses[3] = "Chemistry";

    }

    printReport(sr, db);
    printReport(cr, db);




    return 0;
}
