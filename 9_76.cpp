/*
    Дано предложение, в котором имеется несколько букв е. Найти:
        а) порядковый номер первой из них;
        б) порядковый номер последней из них.
 */

#include <iostream>
#include <string>

using namespace std;

int get_E_index(string s, bool isLast) {
    cout << s.length() << endl;
    return (!isLast) ? s.find("e") : s.rfind("e");
}

int main()
{
    string sentence = "Test sentence will be look like this";
    // С кириллицей подружить не удалось
    cout << get_E_index(sentence,false) << endl;
    cout << get_E_index(sentence,true) << endl;
    return 0;
}
