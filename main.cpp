#include <iostream>
#include "Header.h"

template<typename T>
void findMin(T arr[], int size);

int main() {
    Point point1{5,10};
    Point point2{80,75};

    double dist = Distance(point1,point2);
    std::cout << "Distance: "<< dist << std::endl;

    int size;
    std::cout << "Enter a size array: ";
    std::cin >> size;

    int* arr = CreateDynamicArray(size);

    BoubleSort(arr,size);

    ShowArray(arr,size);

    findMin(arr,size);


    delete[] arr;


    return 0;
}





