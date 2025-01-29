/*
    Даны основания равнобедренной трапеции и угол при большем основании.
    Найти площадь трапеции.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a,b,c,area;
    cout<<"Введите длину меньшего основания:"<<endl;
    cin>>a;
    cout<<"Введите длину большего основания:"<<endl;
    cin>>b;
    cout<<"Введите угол при большем основании(в градусах):"<<endl;
    cin>>c;
    area = (b-a)/2*tan(c)*(a+b)/2;
    cout<<"Площадь :"<<area<<endl;

    return 0;
}
