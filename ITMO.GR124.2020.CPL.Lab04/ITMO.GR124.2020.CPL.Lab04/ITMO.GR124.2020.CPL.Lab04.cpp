// ITMO.GR124.2020.CPL.Lab04
using namespace std;
#include <iostream>
#include <math.h>
#include <list>
#include <stdio.h>

int Myroot(double, double, double, double&, double&);

int a=0;
int b=0;
bool Input(int a, int b);
double root1 = 0;
double root2 = 0;

int lab4_1();
int lab4_2();

int main()
{
    //lab4_1();
    lab4_2();
}

int lab4_1() 
{
    double a;
    double b;
    double c;
    int res;

    system("chcp 1251");
    cout << "Введите коэффициенты уравнения вида a*x2+b*x+c=0\n";
    cout << "Например для уравнения 3*x2-14*x-5=0\n";
    cout << "корни 5 и -1/3 \n";
    cout << "a\n";
    cin >> a;
    cout << "b\n";
    cin >> b;
    cout << "c\n";
    cin >> c;
    
   res =  Myroot(a, b, c, root1, root2 );
   if (res < 0) 
   {
       // no roots 
       cout << "no roots\n";
   }
   else if (res == 0) 
   {
       // one root
       cout << "1 root\n";
   }
   // 2 roots
   else
   {
       cout << "2 roots\n";
   }
   return 0;
}


 int Myroot(double a, double b, double c, double& x1, double& x2)
{
     int res;
     double discr;

     discr = pow(b, 2) - 4 * a * c;
     if (discr > 0)
     {
         x1 =( -b + pow(discr, 0.5))/(2*a);
         x2 = (-b - pow(discr, 0.5))/(2*a);
         res = 1;
     }
     else if (discr < 0)
     {res = -1;}
     else { 
         x1 = -b / (2 * a);
         x2 = 0;
         res = 0;
     }
    return res;
}

int lab4_2() 
{
    system("chcp 1251");
    //int a=0, b=0;
   //bool c = Input(a, b);

    if (Input(a, b) == false) // if(!Input(a,b)) 
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;
}

bool Input(int a1, int b1) {
    //int a1;
    //int b1;
    bool dig = false;
    while (dig == false) {
        
       cout << "введите а\n";
        cin >> a1;
        if (isdigit(!a1)|| a1  == 0)
        {
            cout << a1 << " 'a' is not a digit, or =0, repeat\n";
           // delete a1;
        }
        else {
            cout << "digit\n";
            a = a1;
            dig = true;
            
        }
    }
    cout << "введите b\n";
    cin >> b1;
    dig = false;
    while (dig == false) {
        cin >> b1;
        if (isdigit(!b1) || b1 == 0)
        {
            cout << b1 << " 'b' is not a digit, or =0, repeat\n";
        }
        else {
            cout << "digit\n";
            b = b1;
            dig = true;
            
        }
    }
    return 1;
}