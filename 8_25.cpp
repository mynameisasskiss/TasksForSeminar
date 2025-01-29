/*
    Найти количество делителей каждого из целых чисел от 120 до 140.
 */

#include <iostream>
#include <cmath>

using namespace std;

void task() {
    for (int n = 120; n <= 140; ++n) {
        int cnt = 0;
        int j = (int) sqrt(n);
        if (j == sqrt(n)) {
            cnt++;
            j--;
        }
        for (int i = 1; i <= j; i++) {
            if (n % i == 0) {
                cnt += 2;
            }
        }
        cout << n << " имеет " << cnt << " делителей" << endl;
    }
}

int main() {
    task();
    return 0;
}
