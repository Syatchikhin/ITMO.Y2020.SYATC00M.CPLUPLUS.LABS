// ITMO.GR124.2020.SYAT.CPL.Lab03.cpp : 
using namespace std;
#include <iostream>
#include <math.h>
#include <list>
#include <stdio.h>

int lab3_1();
int lab3_2_1();
int lab3_2_2();
int lab3_3();
int lab3_4();
int lab3_5();
double area(double a1, double b1, double c1);
double area(double a1);
double s;

int main()
{
    //lab3_1();
    //lab3_2_1();
    //lab3_2_2();
    //lab3_3();
    //lab3_4();
    lab3_5();
}


int lab3_1() {
    system("chcp 1251");
    double pp1, pp2, pp3;
    double s1, s2, s3;
    double a, b, c, d, e, f, g;
    int x[5] = { 0,2,7,9,10 };
    int y[5] = { 0,7,8,4,0 };

    cout << " задан пятиугольник с вершинами:\n";
    for (int i = 0; i < 5; i++) {
        cout << "x" << i + 1 << ": " << x[i] << " ";
        cout << "y" << i + 1 << ": " << y[i] << "\n";
    }

    //Найдем длины сторон
    a = sqrt(pow(x[1] - x[0], 2) + pow((y[1] - y[0]), 2));
    b = sqrt(pow(x[4] - x[0], 2) + pow((y[4] - y[0]), 2));
    c = sqrt(pow(x[4] - x[3], 2) + pow((y[4] - y[3]), 2));
    d = sqrt(pow(x[3] - x[2], 2) + pow((y[3] - y[2]), 2));
    e = sqrt(pow(x[2] - x[1], 2) + pow((y[2] - y[1]), 2));
    f = sqrt(pow(x[4] - x[1], 2) + pow((y[4] - y[1]), 2));
    g = sqrt(pow(x[3] - x[1], 2) + pow((y[3] - y[1]), 2));

    // Найдем площади
    //abf
    pp1 = (a + b + f) / 2;
    s1 = sqrt(pp1 * (pp1 - a) * (pp1 - b) * (pp1 - c));

    //edg
    pp2 = (e + d + g) / 2;
    s2 = sqrt(pp2 * (pp2 - e) * (pp2 - d) * (pp2 - g));

    //gfc
    pp3 = (g + f + c) / 2;
    s3 = sqrt(pp3 * (pp3 - g) * (pp3 - f) * (pp3 - c));

    cout << "Площадь s = " << s1 + s2 + s3 << endl;  //вывод результата на экран 

    return 0;
    system("pause");

}

int lab3_2_1() {
    double a;
    double res;

    system("chcp 1251");
    cout << "Введите a\n";
    cin >> a;    // ввод с клавиатуры значения a
    res = pow(a, 1.0/3);

    cout << "power 3x = \n" << res;
    return 0;
}

int lab3_2_2() {
    double a;
    double xi;
    double xi_prev = 1;

    system("chcp 1251");
    cout << "Введите a\n";
    cin >> a;    // ввод с клавиатуры значения a
   
    for (int i = 0; i < 30; i++) {
        
        xi = (1.0/3)* ((a/(xi_prev*xi_prev))+2*xi_prev);
        xi_prev = xi;
    }
    
    cout << "power 3x = \n" << xi;
    return 0;
}

int lab3_3() {
    double a;
    double b[3] = {  };
    string c[3] = {"a","b","c"};
    int choose;
    double s;

    system("chcp 1251");
    cout << "Введите тип треугольника, 1 для равностороннего, 2 для разностороннего \n";
    cin >> choose;    // ввод с клавиатуры значения 

    if (choose == 1) {
        //равносторонний
        cout << "Введите длину стороны \n";
        cin >> a;    // ввод с клавиатуры значения a
        s = area(a);
    }
    else {
        //разносторонний
        cout << " введите длины  сторон треугольника:\n";
        for (int i = 0; i < 3; i++) {
            cout << "введите сторону " << c[i] << ": ";
            cin >> b[i];
        }
        s = area(b[0],b[1],b[2]);
    }

    cout << "Площадь треугольника равна: "  << s;
    return 0;
}

double area(double a1)
{
    s = pow(a1,2)*pow(3.0,0.5)/4; // Найдем площадь равност треуг
    return s;
}

double area(double a1, double b1, double c1)
{
    double pp1; // Найдем площадь разност треуг
    pp1 = (a1 + b1 + c1) / 2;
    s = sqrt(pp1 * (pp1 - a1) * (pp1 - b1) * (pp1 - c1));
    return s;
}
      

int lab3_4() {
    double n;
    double s=0;

    system("chcp 1251");
    cout << "Введите n  для вычисления ряда S = 5 + 10 + 15 + … + 5·n, где (n>0) \n";
    cin >> n;    // ввод с клавиатуры значения 

    for (int i = 1; i < n+1; i++) {  
        s = s + 5 * n;
    }
    cout << "Сумма ряда равна: " << s;
    return 0;
}

int lab3_5() {
    int num;
    int result;
    string res;
    double ostatok = 0;
    string binary = "0000000";
    int temp=0;
    int digit = 7;
    system("chcp 1251");
    cout << "Введите челое положительное число n для перевода его в двоичную систему \n";
    cin >> num;    // ввод с клавиатуры значения 
    
    while (num > 0) {
        temp = num / 2;
        ostatok = num%2;
        result =  num - (2*temp);
        num = temp;
        if (ostatok == 0)
            res = "0";
        else
            res = "1";
        
        binary.replace(digit,1, res);
        digit = digit - 1;
    }
    cout << binary;
    return 0;
}