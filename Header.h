#pragma once
#include <iostream>

struct Student {
    std::string name;
    int age;
    double grade;
};


Student* createStudents(int size);

void inputStudents(Student* students, int size);

Student findTopStudent(Student* students, int size);

void printTopStudent(const Student& student);

void printStudents(const Student* students, int count);

