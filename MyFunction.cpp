#include <cmath>
#include <random>
#include <ctime>
#include "Header.h"
#include <iostream>


double Distance (const Point& point1, const Point& point2 ) {
    double distance = sqrt(pow((point1.x - point2.x), 2) + pow((point1.y - point2.y), 2));
    return distance;
}


int* CreateDynamicArray(int size) {
    int*arr = new int[size];
    srand(time(0));
    for (int i = 0;i < size; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}


void ShowArray(int* arr,int size) {
    for (int i = 0; i < size;i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


void BoubleSort(int* arr, int size) {
    for (int i = 0;i < size - 1;i++) {
        for (int j = size - 1;j > i;j--) {
            if (arr[j] <  arr[j-1]) {
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
}