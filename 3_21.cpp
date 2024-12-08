#include <iostream>

using namespace std;

int main() {
    for (int a = 0; a <= 1; ++a) {
        for (int b = 0; b <= 1; ++b) {
            for (int c = 0; c <= 1; ++c) {
                a = bool(a);
                b = bool(b);
                c = bool(c);
                cout << "А)" <<!(a || !b && c) << " Б)" <<(a && !(b || !c)) << " В)" << !(!a || b && c) << endl;
            }
        }
    }
    return 0;
}
