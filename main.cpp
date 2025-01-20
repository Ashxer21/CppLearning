#include <iostream>


// template<typename T>
// void EvenNumber(T arr[], int size);
// template<typename T>
// void findMin(T arr[], int size);
template<typename T>
void Mass(T arr[], int size);
template<typename T>
void SelectionSort(T arr, int size);
template<typename T>
void BoubleSort(T arr, int size);
template<typename T>
void InsertionSort(T arr[],int size);

int Factorial(int number);

template<typename T>
void QuickSort(T arr[], int last, int first = 0);


template <typename T>
int BinarySearch(const T arr[],int size, T key);


int main() {

    const int SIZE = 10;
    int arr[SIZE] = {120, 7, 60, 9, 5,18,30,25,80,100};
    char str[SIZE] = {'A', 'B', 'H', 'D', 'E','F','X','O','C','N',};

    // Mass(arr, SIZE);
    // Mass(str, SIZE);

    // SelectionSort(arr, SIZE);
    // SelectionSort(str, SIZE);
    //
    // Mass(arr, SIZE);
    // Mass(str, SIZE);

    //  BoubleSort(arr, SIZE);
    // BoubleSort(str, SIZE);

    // InsertionSort(arr, SIZE);
    // InsertionSort(str, SIZE);
    //
    //
    // Mass(arr, SIZE);
    // Mass(str, SIZE);

    // std::cout << "5! = " << Factorial(5) << std::endl;


    QuickSort(arr, 0,SIZE - 1);
    QuickSort(str, 0,SIZE - 1);

    Mass(arr, SIZE);
    Mass(str, SIZE);


    int value;
    std::cout << "Enter value: "  ;
    std::cin >> value;

    int foundIndex = BinarySearch(arr,SIZE,value);

    if (foundIndex != -1) {
        std::cout << "The array has your value: " << foundIndex << std::endl;
    } else
        std::cout << "The array doesn't have your value! " << std::endl;

    return 0;
}


template<typename T>
void Mass(T arr[], int size) {

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
template<typename T>
void SelectionSort(T arr, int size) {
    for (int i = 0;i < size - 1;i++) {
        for (int j = i + 1;j < size;j++) {
            if (arr[j]< arr[i]) {
                std::swap(arr[j], arr[i]);
            }
        }
    }
}



template<typename T>
void BoubleSort(T arr, int size) {
    for (int i = 0;i < size - 1;i++) {
        for (int j = size - 1;j > i;j--) {
            if (arr[j] <  arr[j-1]) {
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
}


template<typename T>
void InsertionSort(T arr[],int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];

        int j;
        for (j = i - 1; j >= 0 && arr[j] > key;j-- )
            arr[j + 1] = arr[j];

        arr[j + 1] = key;
    }
}

// int Factorial(int number) {
//     return number == 0 ? 1 : number * Factorial(number - 1);
// }


template <typename T>
void QuickSort(T arr[], int first, int last) {
    T middle = arr[(first + last) / 2];
    int i = first;
    int j = last;

    do {
        while (arr[i] < middle) i++;
        while (arr[j] > middle) j--;

        if (i <= j) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (first < j) {
        QuickSort(arr, first, j);
    }
    if (i < last) {
        QuickSort(arr, i, last);
    }
}

template <typename T>
int BinarySearch(const T arr[],int size, T key) {

    int leftBound = 0, rightBound = size - 1;

    do {
        int middle = (leftBound + rightBound) / 2;

        if (key < arr[middle])
            rightBound = middle - 1;
        else if (key > arr[middle])
            leftBound = middle + 1;
        else
            return middle;
    }while (leftBound <= rightBound);




    return -1;
}

















// template<typename T>
// void findMin(T arr[], int size) {
//
//     int minElement = arr[0];
//     int minIndex = 0;
//
//     for (int i = 1; i < size; ++i) {
//         if (arr[i] < minElement) {
//             minElement = arr[i];
//             minIndex = i;
//         }
//     }
//
//     std::cout << "Minimal element: " << minElement << std::endl;
//     std::cout << "Index minimal element: " << minIndex << std::endl;
// }
//
// template<typename T>
// void EvenNumber(T arr[], int size) {
//     for (int i = 1; i < size; i++) {
//             if (arr[i] % 2 == 0) {
//                 std::cout << "Even number: " << arr[i] << ", index: " << i << std::endl;
//         }
//     }
// }









// const int size = 7;
// int arr[size] = {50,3,4,6,1,4,310};
//
//
// int min = arr[0];
//     for (int i = 0;i <= size;i++) {
//         if (arr[i] < min) ;
//              min = arr[i];
//
//     }
//     std::cout <<  "Minimum: " << min << std::endl ;


//5. Поміняти місцями рядки
//Заповніть масив розміром 2x3 числами вручну.
//Поміняйте місцями перший і другий рядки, а потім виведіть оновлений масив.

// const int first = 2 ,second = 3;
// int arr[first][second]= {
//     {12,57,90},
//     {49,22,30}
//
// };
//
//   for (int j = 0; j < second; j++) {
//       int temp[second];
//       temp[j] = arr[0][j];
//       arr[0][j] = arr[1][j];
//       arr[1][j] = temp[j];
//   }
//
// for (int i = 0; i < first; i++) {
//    for (int j = 0; j < second; j++) {
//        std::cout << arr[i][j] << " ";
//       }
//
//       std::cout << std::endl;
//  }


//4. Замінити всі парні числа на 0
//Створіть двовимірний масив розміром
//3x3(заповніть випадковими числами).
//
// const int first = 3 ,second = 3;
// int arr[first][second]= {
//     {12,57,90},
//     {49,22,30},
//     {18,67,4},
// };
//   for (int i = 0; i < first; i++) {
//       for (int j = 0; j < second; j++) {
//           if (arr[i][j] % 2 == 0) {
//               arr[i][j] = 0;
//           }
//           std::cout << arr[i][j] << " ";
//       }
//       std::cout << std::endl;
//   }
//

//3. Обчислити суму елементів у кожному стовпці
//Заповніть масив 3x3 числами вручну.
//Для кожного стовпця обчисліть суму елементів і виведіть результат.

// const int first = 3 ,second = 3;
// int arr[first][second]= {
//     {12,57,90},
//     {49,22,30},
//     {83,67,4},
// };
//
// std::cout << arr[2][2] << std::endl;
//
// for (int j = 0; j < second; j++) {
//   int sum = 0;
//   for (int i = 0; i < first; i++) {
//     sum += arr[i][j];
//   }
//   std::cout << "Sum of column " << j << ": " << sum << std::endl;
// }


//2. Знайти максимальний елемент у рядку
//Заповніть двовимірний масив розміром 4x2 числами вручну.
//Для кожного рядка знайдіть максимальний елемент і виведіть його.
// int const FIRST = 4,SECOND = 2;
// int arr[FIRST][SECOND]={
//     {50, 74},
//     {33, 4},
//     {5, 61},
//     {7, 83}
// };
//
//     for (int i = 0; i < FIRST;i++) {
//         int max = arr[i][0];
//         for (int j = 1; j < SECOND;j++) {
//             if (arr[i][j] > max) {
//                 max = arr[i][j];
//             }
//         }
//         std::cout << "Maximum element in rows: " << i << ", Maximum: " << max << std::endl;
//     }

//1. Обчислити суму елементів масиву
//Створіть двовимірний масив розміром 3x3 і заповніть його числами вручну.
//Обчисліть та виведіть суму всіх елементів.
// int sum = 0;
// const int first = 3 ,second = 3;
// int arr[first][second]= {
//     {12,57,90},
//     {49,22,30},
//     {83,67,4},
// };
//
// std::cout << "Array3x3: " << std::endl;
//
// for (int i = 0; i < first;i++) {
//     for(int j = 0; j < second;j++) {
//         sum += arr[i][j];
//         std::cout << arr[i][j] << " ";
//
//     }
//
//     std::cout << std::endl;
// }
// std::cout << "Sum of all elements: " << sum << std::endl;



//4. Поміняти місцями перший і останній елементи
//Створіть масив на 6 елементів.
//Поміняйте місцями перший і останній елемент, а потім виведіть оновлений масив.
// int arr[10] = {50,18,4,6,1,4,310,20,25,10};
//
// int temp = arr[0];
// arr[0] = arr[9];
// arr[9] = temp;
//
//
// for (int i = 0;i < 10; i++)
//     std::cout << "arr["<< i <<"] = " << arr[i] << std::endl;
//
//





//3. Кількість парних чисел у масиві
//Заповніть масив із 10 елементів випадковими числами (наприклад, [3, 8, 12, 5, 7, 10, 2, 4, 9, 6]).
//Порахуйте, скільки елементів є парними, і виведіть їх кількість.


// int arr[10] = {50,18,4,6,1,4,310,20,25,10};
//
//
// for (int i = 0;i < 10; i++) {
//     if (arr[i] % 2 == 0)
//     std::cout << "arr["<< i <<"] = " << arr[i] << std::endl;
// }







//Знайти максимальний і мінімальний елемент
//Використовуй цикл, щоб перевіряти кожен елемент.
// int arr[] = {50,3,4,6,1,4,310};


// int max = arr[0],min = arr[0];
//     for (int i = 0;i <= 7;i++) {
//         if (arr[i] > max) max = arr[i];
//             else if (arr[i] < min) min = arr[i];
//
//     }
//     std::cout << "Maximum " << max << ", Minimum: " << min << std::endl;
//
//
//

// int arr[5];
//
// arr[0] = 20;
// arr[1] = 60;
// arr[2] = 40;
// arr[3] = 120;
// arr[4] = 230;
//
//
// std::cout << arr[0] <<std::endl;
// std::cout << arr[1] <<std::endl;
// std::cout << arr[2] <<std::endl;
// std::cout << arr[3] <<std::endl;
// std::cout << arr[4] <<std::endl;


//Двовимірний масив
// const int WEEKS = 3,DAYS = 5;
//
// int temperatures [WEEKS] [DAYS];
//
// for (int i = 0; i <= WEEKS; i++) {
//     for (int j = 0; j <= DAYS; j++) {
//         temperatures[i][j] = j + i * j + i;
//     }
//
// }
//
// for (int i = 0; i <= WEEKS; i++) {
//     for (int j = 0; j <= DAYS; j++) {
//         std::cout << "temp[" << i << "][" << j << "] = " << temperatures[i][j] << std::endl;
//
//     }
//     std::cout << std::endl;
// }
// int num;
// std::cout << "Enter num: ";
// std::cin >> num;
//
// for (int i = 1; i <= num; i++) {
//     for (int j = 1; j <= i; j++) {
//         std::cout << j;
//     }
//     std::cout << std::endl;
// }

/*Задача 3: Виведення парних чисел
Напиши програму, яка виводить усі парні числа від 1 до N.

Вхід: Користувач вводить число N.
Вихід: Вивести всі парні числа. */
// for (int i = num; i >= 1; i--) {
//     sum += 2;
//     std::cout << sum << " " ;
// }
//
// for (int i = 1; i <= num;i++) {
//     std::cout << i << " " << std::endl;
//     sum *= i;
// }
// std::cout << sum<< " ";
// int number;
// std::cout << "Enter a number: ";
// std::cin >> number;
//
// int currentNumber = 0;
// for (int i = 1; i <= number; i++) {
//     currentNumber = currentNumber * 10 + i;
//     std::cout << currentNumber << std::endl;
// }

// int number;
// std::cout << "Enter a number: ";
// std::cin >> number;
//
// for (int i = number; i >= 1; i--) {
//     if (i % 2 != 0) {
//         std::cout << i << " ";
//     }
// }

// std::cout << "Enter a number: ";
// int number;
// std::cin >> number;
//
// for (int i = number; i >= 1  ;i-- ) {
//     std::cout << i <<  " " ;
// }


// std::cout << "Enter a number: ";
// int count,numbers = 2;
// std::cin >> count;
//
// for (int i = 0; i < count ; i++) {
//     numbers += 2;
//     std::cout << numbers << " ";
//
// }
// result = first % second;
// std::cout << "Result: " << result << std::endl;



// std::cout << "Multiplication Table" << std::endl;
//
// std::cout << "Enter a number: ";
// int number;
// std::cin >> number;
//
// for (int i = 0 ; i <= 10 ;i++) {
//     std::cout << number << " x " << i << " = " << (number * i) << std::endl;
// }


// int sum = 0;
// int number;
//
// std::cout << "Enter number:" << std::endl;
// std::cin >> number;
//
//
// for (int i = 1;  i <= number ; i++) {
//     std::cout << i <<  " " << std::endl;
//     sum += i;
//
// }
// std::cout << "Sum: "<< sum << std::endl;

// int sum = 0;
// int number;
//
// std::cout << "Enter a number (or 0 to stop): ";
// std::cin >> number;
// sum += number;
//
// while (number != 0) {
//     std::cout << "Enter a number (or 0 to stop): ";
//     std::cin >> number;
//     sum += number;
// }
// std::cout << "Sum: "<< sum << std::endl;

// std::cout << "Weather" << std::endl;
// int temp;
// std::cout << "Enter the outside temperature: " << std::endl;
// std::cin >> temp;
//
//
// if (temp < 0) {
//     std::cout << "Very cold" << std::endl;
// } else if (temp >= 0 && temp <= 15) {
//     std::cout << "Cold" << std::endl;
// } else if (temp >= 16 && temp <= 30) {
//     std::cout << "Warm" << std::endl;
// } else {
//     std::cout << "Hot" << std::endl;
// }

// std::cout << "Calculator" << std::endl;
//
// std::cout << "Enter two numbers: " << std::endl;
// int number1,number2;
// std::cin >> number1 >> number2;
//
// std::cout << "Enter operator(+,-,*,/): " << std::endl;
// char op;
// std::cin >> op;
//
// if (op == '+') {
//     std::cout << number1 + number2 << std::endl;
// } else if (op == '-') {
//     std::cout << number1 - number2 << std::endl;
// } else if (op == '*') {
//     std::cout << number1* number2 << std::endl;
// } else if (op == '/' && number2 != 0) {
//     std::cout << number1 / number2 << std::endl;
// } else {
//     std::cout << "Wrong operator!!!!" << std::endl;
// }
  // std::cout << "Enter your data" << std::endl;
    // std::cout << "Enter your login: " << std::endl;
    // std::string login;
    // std::cin >> login;
    //
    // std::cout << "Enter your password: " << std::endl;
    // std::string password;
    // std::cin >> password;
    //
    // if (login == "admin" && password == "oralcumshot") {
    //     std::cout << "Welcome!!!" << std::endl;
    // } else {
    //     std::cout << "Wrong password or login" << std::endl;
    // }  // std::cout << "Enter your data" << std::endl;
    // std::cout << "Enter your login: " << std::endl;
    // std::string login;
    // std::cin >> login;
    //
    // std::cout << "Enter your password: " << std::endl;
    // std::string password;
    // std::cin >> password;
    //
    // if (login == "admin" && password == "oralcumshot") {
    //     std::cout << "Welcome!!!" << std::endl;
    // } else {
    //     std::cout << "Wrong password or login" << std::endl;
    // }
// std::cout << "Enter three numbers: " << std::endl;
// int number1,number2,number3;
// std::cin >> number1 >> number2 >> number3;
//
// if (number1 > number2 && number1 > number3 ) {
//     std::cout << "Number1 is the largest: " << number1 << std::endl;
// } else if (number2 > number1 && number2 > number3) {
//     std::cout << "Number2 is the largest: " << number2 << std::endl;
// } else if (number3 > number2 && number3 > number1) {
//     std::cout << "Number3 is the largest: " << number3 << std::endl;
// } else {
//     std::cout << "Two or more numbers are equal and the largest." << std::endl;
// }

// std::cout << "Enter your age: " << std::endl;
// int age;
// std::cin >> age;
//
// if (age < 18) {
//     std::cout << "You are schoolboy" << std::endl;
// } else if (age >= 18 && age <= 22 ) {
//     std::cout << "You are student" << std::endl;
// } else {
//     std::cout << "You are old" << std::endl;
// }

// std::cout << "Enter number: " << std::endl;
// int number;
// std::cin >> number;
//
// // Перевірка на некоректний ввід
// if (std::cin.fail()) {
//     std::cout << "Wrong symbol! Please enter a valid number." << std::endl;
//     return 1; // Завершуємо програму з помилкою
// }
//
// // Перевірка на парність
// if (number % 2 == 0) {
//     std::cout << "This number is even!" << std::endl;
// } else {
//     std::cout << "This number is not even!" << std::endl;
// }
//
// // Перевірка додатності/від'ємності/нуль
// if (number == 0) {
//     std::cout << "It's a zero!" << std::endl;
// } else if (number < 0) {
//     std::cout << "This number is less than zero!" << std::endl;
// } else {
//     std::cout << "The number is greater than zero!" << std::endl;
// }

// int age;
// std::string name;
// double bing = 2.7;
//
// std::cout << "Enter your name: " << std::endl;
// std::cin >> name;
//
// std::cout << "Enter your age: " << std::endl;
// std::cin >> age;
//
// std::cout << "Hello new user " << name << " your age: " << age + 'n' << std::endl;

// int number;
// std::cout << "Enter integer number: " << std::endl;
// std::cin >> number;
// std::cout << "Double: " << static_cast<double>(number) << std::endl;
//
// double snumber;
// std::cout << "Enter double number: " <<std::endl;
// std::cin >> snumber;
// std::cout << "Integer: " << static_cast<int>(snumber) << std::endl;

// std::cout << "Sum: " << first + second << std::endl;
// std::cout << "Difference: " << first - second << std::endl;
// std::cout << "Product: " << first * second << std::endl;
// std::cout << "Divide: " << (double)first / second << std::endl;

// int first,second,result;
//
// std::cout << "Enter first number: " << std::endl;
// std::cin >> first;
//
// std::cout << "Enter second number: " << std::endl;
// std::cin >> second;
//
// result = first % second;
// std::cout << "Result: " << result << std::endl;