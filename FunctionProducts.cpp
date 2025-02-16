#include "Product.h"
#include <cstring>

void Product::EnterName() {
    std::cout << "Enter product name: ";
    std::cin.ignore();
    std::cin.getline(name, 50);
}

void Product::EnterPrice() {
    do {
        std::cout << "Enter product price: ";
        std::cin >> price;
        if (price < 0) {
            std::cout << "Price cannot be negative!\n";
        }
    } while (price < 0);
}

void Product::EnterQuantity() {
    do {
        std::cout << "Enter product quantity: ";
        std::cin >> quantity;
        if (quantity < 0) {
            std::cout << "Quantity cannot be negative!\n";
        }
    } while (quantity < 0);
}

void Product::Show() const {
    std::cout << "Name: " << name << "\n"
              << "Price: " << price << " UAH\n"
              << "Quantity: " << quantity << "\n";
}

void Product::Buy(int amount) {
    if (amount > quantity) {
        std::cout << "Not enough stock available!\n";
    } else {
        quantity -= amount;
        std::cout << "You bought " << amount << " pcs.\n";
    }
}

void Product::Restock(int amount) {
    if (amount > 0) {
        quantity += amount;
        std::cout << "Stock replenished by " << amount << " pcs.\n";
    } else {
        std::cout << "Invalid quantity for restocking!\n";
    }
}

bool Product::CompareName(const char* searchName) const {
    return std::strcmp(name, searchName) == 0;
}

