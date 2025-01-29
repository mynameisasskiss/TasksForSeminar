/*
    Напечатать числа следующим образом:
    а) 21 20.4
        22 21.4
        ...
        35 34.4

    б) 16 15.5 16.8
        17 16.5 17.8
        ...
        24 23.5 24.8
*/
#include <iostream>
#include <regex>

void a() {
    std::cout << "Задание А"<<std::endl;
    for (int i = 21; i <= 35; ++i) {
        std::cout << i << " " << i - 0.6 << std::endl;
    }
}

void b() {
    std::cout << "Задание Б"<<std::endl;
    for (int i = 16; i <= 24; ++i) {
        std::cout << i << " " << i - 0.5 << " " << i + 0.8 << std::endl;
    }
}

int main() {
    a();
    std::cout<<std::endl;
    b();
    return 0;
}
