 // ITMO.GR124.2020.CPL.Lab02_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream> 
#include <string>
using namespace std;

int main() { 
    lab2_1();
    //lab2_2();
    //lab2_3();
    //lab2_4();
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

int lab2_4{
    system("chcp 1251");
    
    int rounds = 5;
    int x[rounds];
    int y[rounds];
    
    cout << " У вас 5 выстрелов в мишень \n";
    cout << " Введите x и y ";

    for (int i = 0; i < rounds; i++) {
        cout << "\nВведите x" << i + 1 << ":";
        cin >> x[i];    // ввод с клавиатуры значения x 
        cout << "\nВведите y" << i + 1 << ":";
        cin >> y[i];    // ввод с клавиатуры значения y  
    }

    

}


// ITMO.GR124.2020.CPL.Lab02_1.cpp : 
//2_1 Високосный год ?
int lab2_1()
{
    system("chcp 1251");

    int year;
    cout << "\n введите год: ";
    cin >> year;    // ввод с клавиатуры значения  

    if (year % 4 == 0 && year % 100 != 0) {
        cout << "\n   YES1 " << endl;  //вывод результата на экран 
    }
    else if (year % 400 == 0) {
        cout << "\n   YES2 " << endl;  //вывод результата на экран 
    }
    else
        cout << "\n NO " << endl;  //вывод результата на экран 

        //return 0;
    system("pause");
}

//2_2 Наибольшее из 3х чисел
int lab2_2() {

    system("chcp 1251");
    int max = 0;
    int x[3];

    for (int i = 0; i < 3; i++) {
        cout << "\n введите число: ";
        cin >> x[i];
    }

    for (int i = 0; i < 3; i++) {
        if (x[i] > max) {
            max = x[i];
        }
    }

    cout << "\n Максимальное число число: " << max;
}