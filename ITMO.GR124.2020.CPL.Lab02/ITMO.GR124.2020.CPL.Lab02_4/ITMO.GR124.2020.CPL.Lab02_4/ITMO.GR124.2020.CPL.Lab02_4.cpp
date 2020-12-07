// ITMO.GR124.2020.CPL.Lab02_4.cpp : 

#include <iostream> 
#include <string>
using namespace std;

int main() {
    system("chcp 1251");

    const int rounds = 5;
    double x[rounds];
    double y[rounds];
    double center_x = 0;
    double center_y = 0;
    double deviation_x = 0;
    double deviation_y = 0;
    int max_points = 50;
    int points = 0;
    string skill = "";
    int i = 0;
    int turns = 0;
    //cout << " У вас 5 выстрелов в мишень \n";
    cout << " Стреляйте в мишень пока не наберете 50 очков \n";
    
    while (points <=50){
    //for (int i = 0; i < rounds; i++) {
        cout << " Введите x и y: \n ";
        cout << "\nВведите x" << turns + 1 << ":";
        cin >> x[i];    // ввод с клавиатуры значения x 
        x[i] = x[i] + deviation_x;
        cout << "\nВведите y" << turns + 1 << ":";
        cin >> y[i];    // ввод с клавиатуры значения y 
        y[i] = y[i] + deviation_y;
    //}

    // анализ попаданий
    //for (int i = 0; i < rounds; i++) {
        if (x[i] * x[i] + y[i] * y[i] <= 1)
            points = points + 10;
        else if (x[i] * x[i] + y[i] * y[i] <= 2)
            points = points + 5;
        else if (x[i] * x[i] + y[i] * y[i] <= 3)
            points = points + 1;
        else
            points = points;
        turns = turns + 1;
    }
    // подсчет очков и уровня игрока
    cout << " Вы набрали: " << points << " очков\n ";
    
        /*if (points > 40)
            skill = "Профессионал";
        else if (21 < points < 30)
            skill = "Просто стрелок";
        else
            skill = "Новичок";*/

        if (turns < 11)
            skill = "Профессионал";
        else if (10 < turns < 20)
            skill = "Просто стрелок";
        else
            skill = "Новичок";

    cout << " Число выстрелов: " << turns << "\n";
    cout << " Ваш уровень: " << skill <<"\n";
 }
