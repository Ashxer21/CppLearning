#include <iostream>
#include "Header.h"

int** create2DArray(int rows, int cols) {
    int** arr = new int*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

void fill2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100;
        }
    }
}

void printArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Merge(int** arr, int left, int mid, int right, int row) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[row][left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[row][mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[row][k] = L[i];
            i++;
        } else {
            arr[row][k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[row][k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[row][k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void mergeSort(int** arr, int left, int right, int row) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, row);
        mergeSort(arr, mid + 1, right, row);

        Merge(arr, left, mid, right, row);
    }
}

void mergeSort2D(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        mergeSort(arr, 0, cols - 1, i);
    }
}

void delete2DArray(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}