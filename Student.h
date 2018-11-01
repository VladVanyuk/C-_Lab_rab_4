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
    int age;
    string name_dog;

    Student(string  , int  , double );
    Student(int , int);
    Student(int , string );

    void setName(string n); //working, but ne nuzno

    void getRating(int r);

    void getGrowth(double g);

    ~Student();
private:
    string name;
    int rating;
    double growth;

protected:
    int num_of_marks;
    int bad_marks;

};


#endif //UNTITLED20_STUDENT_H
