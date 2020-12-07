 // ITMO.GR124.2020.CPL.Lab02_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream> 
#include <string>
using namespace std;

int main() { 
    lab2_3();
   
}

int lab2_3() {
    system("chcp 1251");
    double roubles = 0;
    int kopeek = 0;
    int money[8] = { 1000,500,200,100,50,10,5,1 };
    string value[] = { "10 руб", "5 руб", "2 руб",  "1 руб", "50 коп", "10 коп" , "5 коп", "1 коп" };
    int quantity[8] = {};

    cout << " введите число рублей для размена, в формате 5.25: ";
    cin >> roubles;
    kopeek = roubles * 100;

    for (int i = 0; i < 8; i++) {
        int temp;
        temp = kopeek / money[i];
        quantity[i] = temp;
        kopeek = kopeek - (temp * money[i]);
        if (kopeek == 0) { i = 8; }
    }

    for (int i = 0; i < 8; i++) {
        cout << " Количество монет: " << value[i] << " равно: " << quantity[i] << "\n ";
    }

}