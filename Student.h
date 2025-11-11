#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class student 
    private:
     int yearLevel;
     string major;
    public:
     void display(){
            cout<<"YEAR"<<""<<yearLevel<<""<<"major"<<""<<major<<endl;

        }
        student();
        student(int yearLevel,string major){
    
        }
        ~student(){

        };
};













#endif
