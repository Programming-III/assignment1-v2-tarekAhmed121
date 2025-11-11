#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================

class Person{
    private:
    string name;
    int id;
    
    public:
   void display(){
        cout<<"Name of person is:" << name<<endl;
        cout<<"ID of person  is:" << id<<endl;
    }






// ==================== Student Class Implementation ====================

class Student:public Person{
    private:
    int yearLevel;
    string major;
    
    public:
    void Student ::display(){
        cout<<"Year level  is:" << yearLevel<<endl;
        cout<<"major of this student  is:" << major<<endl;
    }
    
};




// ==================== Instructor Class Implementation ====================


class Instructor:public Person{
    private:
     string department;
     int experienceYears;
     
     public:
     
     void Instructor ::display(){
          cout<<"Department  is:" << department<<endl;
        cout<<"Experience years of this Instructor are :" << experienceYears<<endl;
     }
};



// ==================== Course Class Implementation ====================


class Course:public Person{
    private:
    string coursecode;
    string coursename;
    int maxStudents;
    Student*students= new Student();
    int currentStudents;
    
    public:
    
   void Course :: addStudent(const Student & s ){
        for (int i=0;i<maxStudents;i++){
        currentStudents++;
        maxStudents++;
        }
    }
    
    displayCourseInfo(){
        cout<<"course code is :" << coursecode<<endl;
        cout<<"Name of the course  is:" << coursename<<endl;
        cout<<"Number of max students in the course are :" << maxStudents<<endl;
        cout<<"current number of students are  :" << currentStudents<<endl;
        cout<<"students :" << <<endl;
        
    }
    void students {
        
        for (int i=0;i<maxStudents;i++){
             cout<<"students :" <<Student <<endl;
             
        }
    
   
    
    }
  void  ~course{
        delete [] students;
    }
};





// ==================== Main Function ====================
int main() {
     Course C1;
   C1.displayCourseInfo();
   Instructor I1;
   I1.display();
  Student s1;
  Student *s2;
  Student*s2 = new Student();
   s1.display();
   s1->addStudent();
    
    
    return 0;
}
