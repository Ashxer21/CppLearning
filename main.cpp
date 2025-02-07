#include <iostream>
#include "Header.h"

int main() {
    int size;

    std::cout << "Enter the number of studnets: ";
    std::cin >> size;

    Student* students = createStudents(size);

    inputStudents(students,size);

    Student topStudent = findTopStudent(students, size);

    printStudents(students, size);

    std::cout << std::endl;

    printTopStudent(topStudent);

    delete[] students;

    return 0;
};




