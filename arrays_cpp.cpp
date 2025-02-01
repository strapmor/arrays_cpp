﻿#include <iostream>
#include <algorithm>
#include <limits>
#include <ctime>
using namespace std;



void task1() {
    srand(time(NULL));
    cout << "Задание 1\nВывести количество максимальных элементов массива\n";
    double arr[10];

    for (int i = 0; i < sizeof(arr) / 8; i++)
        arr[i] = rand() % 6;

    cout << "Элементы массива: ";
    for (int i = 0; i < sizeof(arr) / 8; i++)
        cout << arr[i] << " ";

    double max = *max_element(begin(arr), end(arr));
    cout << endl << "Максимальный элемент массива: " << max << endl;

    int count = 0;
    for (int i = 0; i < sizeof(arr) / 8; i++) {
        if (arr[i] == max)
            count++;
    }
    cout << "Количество максимальных элементов массива: " << count << endl;
}

void task2() {
    srand(time(NULL));
    cout << "Задание 2\nВывести номера минимальных элементов массива\n";
    double arr[10];

    for (int i = 0; i < sizeof(arr) / 8; i++)
        arr[i] = rand() % 6;

    cout << "Элементы массива: ";
    for (int i = 0; i < sizeof(arr) / 8; i++)
        cout << arr[i] << " ";

    double min = *min_element(begin(arr), end(arr));
    cout << endl << "Минимальный элемент массива: " << min << endl;

    cout << "Номера минимальных элементов массива: ";
    for (int i = 0; i < sizeof(arr) / 8; i++) {
        if (arr[i] == min)
            cout << i << " ";
    }
    cout << endl;
}

void task3() {
    srand(time(NULL));
    cout << "Задание 3\nЗаменить максимальные элементы массива нулями\n";
    double arr[10];

    for (int i = 0; i < sizeof(arr) / 8; i++)
        arr[i] = rand() % 6 + 1;

    cout << "Элементы массива: ";
    for (int i = 0; i < sizeof(arr) / 8; i++)
        cout << arr[i] << " ";

    double max = *max_element(begin(arr), end(arr));
    cout << endl << "Максимальный элемент массива: " << max << endl;


    for (int i = 0; i < sizeof(arr) / 8; i++) {
        if (arr[i] == max)
            arr[i] = 0;
    }

    cout << "Элементы массива после замены нулями максимального элемента: ";
    for (int i = 0; i < sizeof(arr) / 8; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void task4() {
    srand(time(NULL));
    cout << "Задание 4\nЗаменить максимальные элементы массива значениями с противоположными знаками\n";
    double arr[10];

    for (int i = 0; i < sizeof(arr) / 8; i++)
        arr[i] = rand() % 6;

    cout << "Элементы массива: ";
    for (int i = 0; i < sizeof(arr) / 8; i++)
        cout << arr[i] << " ";

    double min = *min_element(begin(arr), end(arr));
    cout << endl << "Минимальный элемент массива: " << min << endl;

    cout << "Элементы массива после замены: ";
    for (int i = 0; i < sizeof(arr) / 8; i++) {
        if (arr[i] == min)
            arr[i] *= (-1);
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");

    //task1();
    //task2();
    //task3();
    task4();


    system("pause");
    return 0;
}
