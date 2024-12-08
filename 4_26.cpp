#include <iostream>
#include <string>

using namespace std;

bool ifSumOfDigIsDivisible(int num, int a) {
    string s = to_string(num);
    int sum = 0;
    for (int i = 0; i < s.size(); ++i) {
        sum += stoi(s.substr(i, 1));
    }
    return sum % a == 0;
}

int main() {
    int num, a;
    cout << "Введите число: ";
    cin >> num;
    cout << "Введите а: ";
    cin >> a;
    cout << (ifSumOfDigIsDivisible(num, 3) ? "Сумма кратна 3" : "Сумма не кратна 3") << endl;
    cout << (ifSumOfDigIsDivisible(num, a) ? "Сумма кратна " : "Сумма не кратна ") << a << endl;
    return 0;
}
