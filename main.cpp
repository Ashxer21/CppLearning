#include <iostream>
#include "Header.h"

void Initialize(Student& student) {
    student.EnterAge();
    student.EnterName();
}


void Initialize(Student students[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << "Student #" << i + 1 << ":\n";
        Initialize(students[i]);
    }
}


void Show(Student students[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << "Student #" << i + 1 << ":\n";
        students[i].Show();
    }
}


int main() {
    std::cout << "Enter amount of students: ";
    size_t size;
    std::cin >> size;

    Student* students = new Student[size];

    Initialize(students,size);
    Show(students,size);


    delete[] students;

    return 0;
};




