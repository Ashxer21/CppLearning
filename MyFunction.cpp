#include "Header.h"
#include <iostream>

void Initialize(Product& product) {
    product.EnterName();
    product.EnterPrice();
    product.EnterQuantity();
}

void Initialize(Product products[], size_t size) {
    for (size_t i = 0; i < size; i++) {
        std::cout << "\nProduct #" << i + 1 << ":\n";
        Initialize(products[i]);
    }
}

void Show(Product products[], size_t size) {
    std::cout << "\nList of products:\n";
    for (size_t i = 0; i < size; i++) {
        std::cout << "\nProduct #" << i + 1 << ":\n";
        products[i].Show();
    }
}


void AddProduct(Product*& products, size_t& size) {
    Product* newProducts = new Product[size + 1];
    for (size_t i = 0; i < size; i++)
        newProducts[i] = products[i];

    std::cout << "\nAdd a new product:\n";
    Initialize(newProducts[size]);

    delete[] products;
    products = newProducts;
    size++;
}

void ModifyStock(Product* products, size_t size, bool isBuying) {
    std::cin.ignore();
    char searchName[50];
    std::cout << "Enter the name of the product: ";
    std::cin.getline(searchName, 50);

    for (size_t i = 0; i < size; i++) {
        if (products[i].CompareName(searchName)) {
            int amount;
            std::cout << "Enter the quantity: ";
            std::cin >> amount;

            if (isBuying)
                products[i].Buy(amount);
            else
                products[i].Restock(amount);

            return;
        }
    }
    std::cout << "Product not found!\n";
}

void DeleteProduct(Product*& products, size_t& size) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    char searchName[50];
    std::cout << "Enter the name of the product to delete: ";
    std::cin.getline(searchName, 50);

    size_t indexToDelete = size;
    for (size_t i = 0; i < size; i++) {
        if (products[i].CompareName(searchName)) {
            indexToDelete = i;
            break;
        }
    }

    if (indexToDelete == size) {
        std::cout << "Product not found!\n";
        return;
    }

    Product* newProducts = new Product[size - 1];
    for (size_t i = 0, j = 0; i < size; i++) {
        if (i != indexToDelete)
            newProducts[j++] = products[i];
    }

    delete[] products;
    products = newProducts;
    size--;

    std::cout << "Product deleted!\n";
}

void ManageProducts(Product*& products, size_t& size) {
    int choice;
    do {
        std::cout << "\nMenu:\n"
                  << "1. View all products\n"
                  << "2. Add a new product\n"
                  << "3. Buy a product\n"
                  << "4. Replenish the product\n"
                  << "5. Delete an item\n"
                  << "6. Exit\n"
                  << "Your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                Show(products, size);
                break;
            case 2:
                AddProduct(products, size);
                break;
            case 3:
                ModifyStock(products, size, true);
                break;
            case 4:
                ModifyStock(products, size, false);
                break;
            case 5:
                DeleteProduct(products, size);
                break;
        }
    } while (choice != 6);
}


