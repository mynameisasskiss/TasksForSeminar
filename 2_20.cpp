#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

short method_a(short num) {
    string numStr;
    numStr = to_string(num);
    reverse(numStr.begin(), numStr.end());
    return stoi(numStr);
}

short method_d(short num, bool use_separated) {
    string numStr;
    numStr = to_string(num);
    if (!use_separated) {
        string tempStr[2];
        tempStr[0] = numStr.substr(0, 2);
        tempStr[1] = numStr.substr(2, 4);
        numStr = tempStr[1] + tempStr[0];
    } else {
        string tempStr;
        for (short i = 0; i < numStr.length(); ++i) {
            short j;
            if (i >= 2) j = i - 2;
            else j = i + 2;
            tempStr[i] = numStr[j];
        }
        numStr = tempStr;
    }
    return stoi(numStr);
}

short method_c(short num) {
    string numStr, tempStr;
    numStr = to_string(num);
    tempStr = numStr;
    tempStr[1] = numStr[2];
    tempStr[2] = numStr[1];
    return stoi(tempStr);
}

short method_b(short num) {
    string numStr, tempStr;
    numStr = to_string(num);
    for (short i = 0; i < numStr.length(); ++i) {
        short j;
        if (i % 2 == 0) j = i + 1;
        else j = i - 1;
        tempStr[i] = numStr[j];
    }
    return stoi(tempStr);
}

int main() {
    short num, a, b, c, d1, d2;
    cin >> num;
    if (999 < num && num < 10000) {
        a = method_a(num);

        b = method_b(num);

        c = method_c(num);

        d1 = method_d(num,false);

        d2 = method_d(num,true);

        cout<<"А: "<<a<<endl<<"Б: "<<b<<endl<<"В: "<<c<<endl<<"Д(1): "<<d1<<endl<<"Д(2): "<<d2<<endl;
    } else
        cout << "Ошибка во входных данных" << endl;
    return 0;
}
