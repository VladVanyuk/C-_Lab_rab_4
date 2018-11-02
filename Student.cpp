//
// Created by Владислав Ванюк on 10/26/18.
//


#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string n , int r , double g):
        name(n), rating(r) , growth(g)
{
    cout << name << endl << rating << endl << growth << endl << " " << endl;
}

Student::Student(int m, int b):
        num_of_marks(m), bad_marks(b)
{
    cout << num_of_marks << endl << bad_marks << endl << " "<< endl;
}
Student::Student(int a, string dg) :
        age(a), name_dog(dg)
{
    cout << age << endl << name_dog << endl << " " << endl;
}

void Student::setName(string n) { // not using function
    name = n;
    cout << name;
}

void Student::getRating(int r) {     // not using function
    rating = r;
    cout << rating;
}

void Student::getGrowth(double g) { // not using function.
    growth = g;
    cout << growth;
}



Student::~Student(){

}