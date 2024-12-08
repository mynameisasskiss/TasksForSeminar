#include <iostream>
#include <cmath>

void getRoots(double a, double b, double c) {
    double D = b*b - 4*a*c;
    double root1 = ((b*-1)+sqrt(D))/(2*a);
    double root2 = ((b*-1)-sqrt(D))/(2*a);
    if (isnan(root1)||isnan(root2)) {
        std::cout << "Вещественных корней нет :(";
        return;
    }
    std::cout << root1 << " " << root2 << std::endl;
}


int main() {
    double a,b,c;
    std::cin >> a >> b >> c;
    getRoots(a,b,c);
    return 0;
}