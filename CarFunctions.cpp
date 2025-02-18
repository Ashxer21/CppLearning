#include "Car.h"
#include <cstring>
#include <limits>

void Car::Show() {
    std::cout << "\tBrand: " << brand << std::endl;
    std::cout << "\tModel: " << model << std::endl;
    std::cout << "\tYear: " << year << std::endl;
    std::cout << "\tEngine: " << engineVolume << " (" << fuelType << ")" << std::endl;
    std::cout << "\tColor: " << color << std::endl;
}

void Car::ChangeBrand(const char* newBrand) {
    if (newBrand && std::strlen(newBrand) < 20) {
        strcpy_s(brand, 20, newBrand);
    } else {
        std::cout << "New brand is incorrect.\n";
    }
}

void Car::ChangeModel(const char* newModel) {
    if (newModel && std::strlen(newModel) < 20) {
        strcpy_s(model, 20, newModel);
    } else {
        std::cout << "New model is incorrect.\n";
    }
}

void Car::ChangeYear(int newYear) {
    if (newYear > 1885) {
        year = newYear;
    } else {
        std::cout << "New year is incorrect.\n";
    }
}

void Car::ChangeEngineVolume(const char* newVolume) {
    if (newVolume != nullptr && std::strlen(newVolume) < 255) {
        std::strcpy(engineVolume, newVolume);
    } else {
        std::cout << "Engine volume is invalid.\n";
    }
}

void Car::ChangeFuelType(const char* newFuel) {
    if (newFuel && std::strlen(newFuel) < 10) {
        strcpy_s(fuelType, 10, newFuel);
    } else {
        std::cout << "New fuel type is incorrect.\n";
    }
}

void Car::ChangeColor(const char* newColor) {
    if (newColor && std::strlen(newColor) < 20) {
        strcpy_s(color, 20, newColor);
    } else {
        std::cout << "New color is incorrect.\n";
    }
}

void Car::EnterBrand() {
    char temp[255];
    std::cout << "Enter brand: ";
    std::cin >> temp;
    ChangeBrand(temp);
}

void Car::EnterModel() {
    char temp[255];
    std::cout << "Enter model: ";
    std::cin >> temp;
    ChangeModel(temp);
}

void Car::EnterYear() {
    int temp;
    std::cout << "Enter year: ";
    std::cin >> temp;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    ChangeYear(temp);
}

void Car::EnterEngineVolume() {
    std::string temp;
    std::cout << "Enter engine volume (e.g., 1.8T, 2.0, Electric): ";
    std::getline(std::cin, temp);
    ChangeEngineVolume(temp.c_str());
}

void Car::EnterFuelType() {
    char temp[255];
    std::cout << "Enter fuel type (Petrol, Diesel, Electric, Hybrid): ";
    std::cin.getline(temp, 255);
    ChangeFuelType(temp);
}

void Car::EnterColor() {
    char temp[255];
    std::cout << "Enter color: ";
    std::cin.getline(temp, 255);
    ChangeColor(temp);
}



