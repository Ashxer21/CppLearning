#include <iostream>
#include "Header.h"


Student* createStudents(int size) {
    return new Student[size];
};

void inputStudents(Student* students, int size) {
    for (int i= 0; i < size; ++i) {
        std::cout << "Enter details for student " << i + 1 << ":\n";

        std::cout << "Name: ";
        std::cin.ignore();
        std::getline(std::cin,students[i].name);

        std::cout << "Age: ";
        std::cin >>students[i].age;

        std::cout <<"Grade: ";
        std::cin >>students[i].grade;

    };
};

Student findTopStudent(Student* students, int size) {
    int topIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (students[i].grade > students[topIndex].grade) {
            topIndex = i;
        }
    }
    return  students[topIndex];
}

void printStudents(const Student* students, int count) {
    std::cout << "\nList of Students:\n";
    for (int i = 0; i < count; ++i) {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "Name: " << students[i].name << "\n";
        std::cout << "Age: " << students[i].age << "\n";
        std::cout << "Grade: " << students[i].grade << "\n";
        std::cout << "---------------------------\n";
    }
}

void printTopStudent(const Student& student) {
    std::cout << "Top student details:\n";
    std::cout << "Name: " << student.name << "\n";
    std::cout << "Age: " << student.age << "\n";
    std::cout << "Grade: " << student.grade << "\n";
}


