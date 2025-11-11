#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
public class Course {
    string coursecode;
    string coursename;
    int maxStudents;
    Student*students;
    int currentStudents;
    
    public:
    addStudent(const Student & s);
    displayCourseInfo();
     ~course;
}













#endif
