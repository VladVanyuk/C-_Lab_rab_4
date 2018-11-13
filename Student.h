//
// Created by Владислав Ванюк on 10/26/18.
//

#ifndef UNTITLED20_STUDENT_H
#define UNTITLED20_STUDENT_H


#include <iostream>
#include <string>

using namespace std;


class Student {

public:
    int age_student;
    string name_dog_student;

    Student(string  , int  , double );
    Student(int , int);
    Student(int , string );

    void setNameStudent(string n); //working, but not used

    void getRatingStudent(int r); // working, but not used

    void getGrowthStudent(double g); // working, but not used

    ~Student();
private:
    string name_student;
    int rating_student;
    double growth_student;

protected:
    int num_of_marks;
    int bad_marks;

};


#endif //UNTITLED20_STUDENT_H
