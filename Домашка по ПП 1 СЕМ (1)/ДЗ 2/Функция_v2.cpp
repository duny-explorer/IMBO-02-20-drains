#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, b;
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");

    cout << "Введите х - ";
    cin >> x;

    cout << "Введите у - ";
    cin >> y;

    cout << "Введите b - ";
    cin >> b;

    (b - x) >= 0 && (b - y) > 0 ? cout << log(b - y)*sqrt(b - x) : cout << "Нельзя посчитать";
    return 0;
}

