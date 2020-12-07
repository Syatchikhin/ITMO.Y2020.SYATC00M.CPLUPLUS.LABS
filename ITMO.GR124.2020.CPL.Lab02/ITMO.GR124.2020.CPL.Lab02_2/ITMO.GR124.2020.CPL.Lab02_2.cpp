// ITMO.GR124.2020.CPL.Lab02_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

//2_2 Наибольшее из 3х чисел
int main() {

    system("chcp 1251");
    int max = 0;
    int x[3];

    for (int i = 0; i < 3; i++) {
        cout << "\n введите число: ";
        cin >> x[i];
        if (x[i] > max) {
            max = x[i];
        }
    }

    cout << "\n Максимальное число число: " << max;
}