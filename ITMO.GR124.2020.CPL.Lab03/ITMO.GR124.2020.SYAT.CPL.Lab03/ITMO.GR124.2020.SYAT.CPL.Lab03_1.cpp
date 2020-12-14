// ITMO.GR124.2020.SYAT.CPL.Lab03.cpp : 
using namespace std;
#include <iostream>
#include <math.h>
int main()
{
    system("chcp 1251");
    double pp1, pp2, pp3;
    double s1, s2, s3;
    double a, b, c, d, e, f, g;
    int x[5] = {0,2,7,9,10};
    int y[5] = { 0,7,8,4,0 };

    cout << " задан пятиугольник с вершинами:\n"; 
    for (int i = 0; i < 5; i++) {
        cout << "x" << i + 1 << ": " << x[i] << " ";
        cout << "y" << i + 1 << ": "<< y[i] << "\n";  
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
    s1 = sqrt(pp1*(pp1-a)*(pp1-b)*(pp1-c));

    //edg
    pp2 = (e + d + g) / 2;
    s2 = sqrt(pp2 * (pp2 - e) * (pp2 - d) * (pp2 - g));

    //gfc
    pp3 = (g + f + c) / 2;
    s3 = sqrt(pp3 * (pp3 - g) * (pp3 - f) * (pp3 - c));

    cout << "Площадь s = " << s1+s2+s3 << endl;  //вывод результата на экран 

    //return 0;
    system("pause");
}
