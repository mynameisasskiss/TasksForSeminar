/*
    Составить программу вывода на экран в одну строку трех любых чисел с двумя пробелами между ними.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string outputData = "";
    for (int i = 0; i < 3; ++i) {
        int num;
        cin >> num;
        outputData += (to_string(num) + "  ");
    }
    cout << outputData << endl;
    return 0;
}
