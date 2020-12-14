//ITMO.GR124.2020.CPL.Lab05
//
using namespace std;
#include <iostream>
#include <math.h>
#include <list>
#include <stdio.h>


const int n = 10;
int mas[];

void FillArray(int n, int mas[]);
int SummArray(int n, int mas[]);
void SortArray(int n, int mas[]);
void PrintArray(int n, int mas[]);

const int kc = 8;
int a[], b[];
int*  max_vect(int kc, int a[], int b[]);

int lab5_1();
int lab5_2();

int main()
{
    //lab5_1();
    lab5_2();
}

int lab5_1()
{
    system("chcp 1251");

    //Fill array
    FillArray(n, mas);

    //Element's summ
    int sum = SummArray(n, mas);
    cout << "Сумма элементов массива s=\n" << sum;

    //Out array to acreen
    PrintArray(n, mas);

    //Sort array
    SortArray(n, mas);

    //Out array to acreen
    PrintArray(n, mas);

    return 0;
}


void FillArray(int n, int mas[]) {
    //n = 10;
    mas[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
}
int SummArray(int n, int mas[]) {
    mas[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    return s;
}

void PrintArray(int n, int mas[]) {
    //int i = n;
    mas[n];
    //for (int i : mas) // не работает эта схема foreach
//cout << i << '\t';
    for (int i = 0; i < n; i++) // это работает
    {
        cout << "Array element " << i + 1 << "\n";
        cout << mas[i] << endl;
    }
}

void SortArray(int n, int mas[]) {
    //sort
    mas[n];
    int min = 0; // для записи минимального значения 
    int buf = 0; // для обмена значениями 

    for (int i = 0; i < n; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением 
     // в цикле найдем реальный номер ячейки с минимальным значением 
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;
        // перестановка этого элемента, поменяв его местами с текущим 
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }

}

int lab5_2()
{
    system("chcp 1251");
    //setlocale(LC_ALL, "Russian");
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };

    int kc = sizeof(a) / sizeof(a[0]); //Количество элементов массива 
    int* c;                         //Указатель на результирующий массив 
    c = max_vect(kc, a, b);        //вызов функции для создания массива 

    for (int i = 0; i < kc; i++)       //Вывод результата. 
        cout << c[i] << " ";
    cout << endl;
    delete[]c;            //Возврат памяти.

    return 0;
}

int* max_vect( int kc, int a[], int b[]) {
    
    
    int* d= new int [kc] ;
    
    for (int i = 0; i < kc; i++) {
        if (a[i] > b[i])
        {
            d[i] = a[i];
        }
        else
        {
            d[i] = b[i];
        }
       
    }
   
    return d;
}