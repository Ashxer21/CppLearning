#pragma once
#include <iostream>

class Student {
private:
    char name[20] = "NoName";
    int age = 0;

public:
    void Show();
    void ChangeName(const char* newName);
    void ChangeAge(int newAge);
    void EnterName();
    void EnterAge();
    int GetAge() { return age; };
};


