// ITMO.GR124.2020.CPL.Lab02_1.cpp : 
#include <iostream> 
using namespace std;

//2_1 Високосный год ?
int smain1()
{
    system("chcp 1251");
  
      int year;
    cout << "\n введите год: ";
    cin >> year;    // ввод с клавиатуры значения  

        if ( year%4 == 0 && year%100 != 0)  { 
            cout << "\n   YES1 " << endl;  //вывод результата на экран 
        }
        else if (year % 400 == 0) {
            cout << "\n   YES2 " << endl;  //вывод результата на экран 
        }
        else
    cout << "\n NO "  << endl;  //вывод результата на экран 

    //return 0;
    system("pause");
}

//2_2 Наибольшее из 3х чисел
int main() {

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