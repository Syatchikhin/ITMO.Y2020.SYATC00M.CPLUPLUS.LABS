// ITMO.GR124.2020.SYAT.CPL.Lab01.cpp 
//

#include <iostream> 

using namespace std;

int main()
{
    system("chcp 1251");
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
    double s;
    double s1, s2, s3;
    int x[5];
    int y[5];
    cout << "\n например: для  (3, 4), (5, 11), (12, 8), (9, 5), (5, 6) = 30";
    for (int i = 0; i < 5; i++) {
        cout << "\nВведите x" << i+1 << ":";
        cin >> x[i];    // ввод с клавиатуры значения x 
        cout << "\nВведите y" << i+1 << ":";
        cin >> y[i];    // ввод с клавиатуры значения y  
    }
    s = (x[0] * y[1] + x[1] * y[2] + x[2] * y[3] + x[3] * y[4] + x[4] * y[0] - \
        x[1] * y[0] - x[2] * y[1] - x[3] * y[2] - x[4] * y[3] - x[0] * y[4]) / 2;

    x1 = x[0] * y[1];
    x2 = x[1] * y[2];
    x3 = x[2] * y[3];
    x4 = x[3] * y[4];
    x5 = x[4] * y[0];
    x6 = x[1] * y[0];
    x7 = x[2] * y[1];
    x8 = x[3] * y[2];
    x9 = x[4] * y[3];
    x10 = x[0] * y[4];
    s1 = x1 + x2 + x3 + x4 + x5;
    s2 = x6 + x7 + x8 + x9 + x10;
    s3 = (s2 - s1)/2;
    
    cout << "\nПлощадь s = " << s3 << endl;  //вывод результата на экран 
    
    //return 0;
    system("pause");
}

//для  (3, 4), (5, 11), (12, 8), (9, 5), (5, 6) = 30