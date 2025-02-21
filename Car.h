#pragma once
#include <iostream>

class Car {
private:
    char brand[20] = "Unknown";
    char model[20] = "Unknown";
    int year = 0;
    char engineVolume[255] = "Unknown";
    char fuelType[10] = "Unknown";
    char color[20] = "Unknown";

public:
    void Show();
    void ChangeBrand(const char* newBrand);
    void ChangeModel(const char* newModel);
    void ChangeYear(int newYear);
    void ChangeEngineVolume(const char* newVolume);
    void ChangeFuelType(const char* newFuel);
    void ChangeColor(const char* newColor);
    void EnterBrand();
    void EnterModel();
    void EnterYear();
    void EnterEngineVolume();
    void EnterFuelType();
    void EnterColor();
};
