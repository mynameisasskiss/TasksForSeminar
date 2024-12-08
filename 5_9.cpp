#include <iostream>

int main() {
    std::cout << "in\tcm"<<std::endl;
    for (int i = 10; i <= 22; ++i) {
        std::cout<<i<<"\t"<<i*2.54<<std::endl;
    }
    return 0;
}
