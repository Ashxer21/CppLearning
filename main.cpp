#include <iostream>
#include "Header.h"

int main() {
    std::cout << "Enter the initial quantity of goods: ";
    size_t size;
    std::cin >> size;

    Product* products = new Product[size];

    Initialize(products, size);
    ManageProducts(products, size);

    delete[] products;

    return 0;
}



