//
// Created by Владислав Ванюк on 10/26/18.
//


#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string n , int r , double g):
        name_student(n), rating_student(r) , growth_student(g)
{
    cout << name_student << endl << rating_student << endl << growth_student << endl << " " << endl;
}

Student::Student(int m, int b):
        num_of_marks(m), bad_marks(b)
{
    cout << num_of_marks << endl << bad_marks << endl << " "<< endl;
}
Student::Student(int a, string dg) :
        age_student(a), name_dog_student(dg)
{
    cout << age_student << endl << name_dog_student << endl << " " << endl;
}

void Student::setNameStudent(string n) { // not using function
    name_student = n;
    cout << name_student;
}

void Student::getRatingStudent(int r) {     // not using function
    rating_student = r;
    cout << rating_student;
}

void Student::getGrowthStudent(double g) { // not using function.
    growth_student = g;
    cout << growth_student;
}



Student::~Student(){

}