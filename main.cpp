#include <iostream>
#include "Header.h"


int main() {
    int rows,cols;
    std::cout << "Enter a rows for 2D-array: ";
    std::cin >> rows;

    std::cout << "Enter a cols for 2D-array: ";
    std::cin >> cols;

    int** arr = create2DArray(rows,cols);

    fill2DArray(arr,rows,cols);

    mergeSort2D(arr,rows,cols);

    printArray(arr,rows,cols);

    delete2DArray(arr,rows);

    return 0;
};




