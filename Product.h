#pragma once
#include <iostream>

class Product {
private:
    char name[50] = "NoName";
    double price = 0.0;
    int quantity = 0;

public:
    void EnterName();
    void EnterPrice();
    void EnterQuantity();
    void Show() const;

    void Buy(int amount);
    void Restock(int amount);

    bool CompareName(const char* searchName) const;  // Порівняння назв

    const char* GetName() const { return name; }
    double GetPrice() const { return price; }
    int GetQuantity() const { return quantity; }
};
