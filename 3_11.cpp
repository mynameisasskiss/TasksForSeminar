#include <iostream>
#include <cmath>

using namespace std;

bool a(short x, short y) {
    return ((pow(x,2))+(pow(y,2)))<=4;
}

bool b(short x, short y) {
    return ((x>=0)||(pow(y,2)!=4));
}

bool c(short x, short y) {
    return ((x>=0)&&(pow(y,2)!=4));
}

bool d(short x, short y) {
    return (((x*y)!=0)&&(y>x));
}

bool e(short x, short y) {
    return (((x*y)!=0)||(y<x));
}

bool f(short x, short y) {
    return (!((x*y)<0)&&(y>x));
}

bool g(short x, short y) {
    return (!((x*y)<0)||(y>x));
}

int main() {
    cout<<a(1,-1)<<endl<<b(1,2)<<endl<<c(1,2)<<endl<<d(2,1)<<endl<<e(2,1)<<endl<<f(2,1)<<endl<<g(1,2)<<endl;
    return 0;
}
