#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int kilos,centners;
    cout<<"Введите массу(в кг):"<<endl;
    cin>>kilos;
    centners = floor(kilos / 100);
    cout<<"В "<<kilos<<" кг - "<<centners<<" центнеров"<<endl;

    return 0;
}
