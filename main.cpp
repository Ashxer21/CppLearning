#include <iostream>



//Завдання 2: Динамічна пам'ять та масиви
//Напиши функцію createArray, яка:

//Виділяє динамічний масив розміру n, де n задається користувачем.
//Заповнює масив числами від 1 до n.
//Повертає вказівник на масив.
//Також напиши функцію printArray, яка приймає вказівник на масив і виводить його елементи.
//Підказка: не забудь звільнити пам'ять!



int* CreateArray(int size) {
    int* array = new int[size];

    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
    }

return array;
}


void printArray(int* array ,int size) {
    for (int i = 0; i < size;++i) {
        std::cout << array[i] << " ";
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

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;


    int* myArray = CreateArray(size);

    BoubleSort(myArray ,size);


    std::cout << "The elemnts of the array are: ";
    printArray(myArray,size);



    delete[] myArray;






    return 0;
}





