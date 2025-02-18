#include "Header.h"
#include <iostream>

void Initialize(Car& car) {
    car.EnterBrand();
    car.EnterModel();
    car.EnterYear();
    car.EnterEngineVolume();
    car.EnterFuelType();
    car.EnterColor();
}

void Initialize(Car cars[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << "Car #" << i + 1 << ":\n";
        Initialize(cars[i]);
    }
}

void Show(Car cars[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << "Car #" << i + 1 << ":\n";
        cars[i].Show();
    }
}

void EditCar(Car& car) {
    int choice;
    do {
        std::cout << "\nEdit Menu:\n";
        std::cout << "1. Change Brand\n";
        std::cout << "2. Change Model\n";
        std::cout << "3. Change Year\n";
        std::cout << "4. Change Engine Volume\n";
        std::cout << "5. Change Fuel Type\n";
        std::cout << "6. Change Color\n";
        std::cout << "7. Show Car Info\n";
        std::cout << "8. Exit Editing\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: car.EnterBrand(); break;
            case 2: car.EnterModel(); break;
            case 3: car.EnterYear(); break;
            case 4: car.EnterEngineVolume(); break;
            case 5: car.EnterFuelType(); break;
            case 6: car.EnterColor(); break;
            case 7: car.Show(); break;
            case 8: std::cout << "Exiting edit mode.\n"; break;
            default: std::cout << "Invalid choice, try again.\n";
        }
    } while (choice != 8);
}

void ProcessCars() {
    std::cout << "Enter number of cars: ";
    size_t size;
    std::cin >> size;

    Car* cars = new Car[size];

    Initialize(cars, size);
    Show(cars, size);

    int index;
    std::cout << "\nEnter car number to edit (or -1 to exit): ";
    std::cin >> index;

    if (index > 0 && index <= size) {
        EditCar(cars[index - 1]);
        Show(cars, size);
    }

    delete[] cars;
}
