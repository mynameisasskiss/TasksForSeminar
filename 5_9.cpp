/*
    Напечатать таблицу перевода расстояний в дюймах в сантиметры для значений 10, 11, ..., 22 дюйма (1 дюйм = 25,4 мм).
*/
#include <iostream>

int main() {
    std::cout << "in\tcm"<<std::endl;
    for (int i = 10; i <= 22; ++i) {
        std::cout<<i<<"\t"<<i*2.54<<std::endl;
    }
    return 0;
}
