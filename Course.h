#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here#define PERSON.H;
class course {
private:
 string courseCode;
 string courseName;
 int maxStudents;
 Student* students;
 int currentStudents;
public:
 course();
 course(string courseCode , string courseName , int maxStudents){
    int currentStudents=0;
 };
 int addStudent(const Student& s){
    if(maxStudents<=currentStudents){
    currentStudents++;
    }
    else 
    cout<<"max students has been exceeded"<<endl;
 };
 void displayCourseInfo(){
    cout<<"courseCode is"<<""<<courseCode<<""<<"courseName "<<courseName<<""<<"maximum number of students is "<<maxStudents<<""<<"current Students enrolled "<<currentStudents<<endl;


 };
 ~course(string courseCode , string courseName , int maxStudents);
 ~course();
 course::~course()
{
}
 


};














#endif
