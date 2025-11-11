#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#define PERSON.H;

#include "Person.h"
using namespace std;
//#write ructor class hereclass instructor :public person{
class instructor {
    private:
    string department;
    int experienceYears;
    
    public:
     void display(){
    cout<<"department"<<""<<department<<""<<"ExperienceYears"<<""<<experienceYears<<endl;
     }
     instructor();
     instructor(string department,int experienceYears);
    
     
     ~instructor();
     instructor::~instructor()
{
}

     
};












#endif
