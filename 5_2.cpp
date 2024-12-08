#include <iostream>

using namespace std;

int main() {
    int num, quan;
    cout<<"Введите число и количество повторов через пробел";
    cin >> num >> quan;
    for (int i = 0; i < quan; ++i) {
        cout<<num<<" ";
    }
    return 0;
}
