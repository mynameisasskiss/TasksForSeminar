/*
    Дан массив. Найти:
        а) сумму элементов массива, значение которых не превышает 20;
        б) сумму элементов массива, больших числа a.
 */

#include <iostream>

using namespace std;

int task_a(vector<int> data) {
    int sum = 0;
    for(int number: data)
        if (number < 20)
            sum += number;
    return sum;
}

int task_b(vector<int> data, int border) {
    int sum = 0;
    for (int number : data)
        if (number > border)
            sum += number;
    return sum;
}

int main(int argc, char *argv[])
{
    int brdr = atoi(argv[1]);
    vector<int> input {1, 2, 3, 4, 5, 423, 423, 5, 54, 6745};
    cout << task_a(input) << endl;
    cout << task_b(input,brdr) << endl;

    return 0;
}



