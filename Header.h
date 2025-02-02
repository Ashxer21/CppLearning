#pragma once
#include <iostream>

struct Point {
    int x;
    int y;
};

double Distance (const Point& point1, const Point& point2 );
int* CreateDynamicArray(int size);
void BoubleSort(int* arr, int size);
void ShowArray(int* arr,int size);



template<typename T>
void findMin(T arr[], int size) {

    int minElement = arr[0];
    int minIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }

    std::cout << "Minimal element: " << minElement << std::endl;
    std::cout << "Index minimal element: " << minIndex << std::endl;
}