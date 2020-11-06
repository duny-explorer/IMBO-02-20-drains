#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, a;
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");

    cout << "Введите х - ";
    cin >> x;

    cout << "Введите а - ";
    cin >> a;

    if (a < x*x && x >= 1 || x == 0) {
        cout << "Значения не существует";
    } else {
        x >= 1 ? cout << sqrt((a - x*x)) : cout << a*log(abs(x));
    }

    return 0;
}