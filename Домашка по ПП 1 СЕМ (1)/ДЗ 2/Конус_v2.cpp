#include <iostream>
#include <math.h>
using namespace std;


int main() {
    double r, R, h;
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");

    cout << "Введите радиус верхнего основания - ";
    cin >> r;

    cout << "Введите радиус нижнего основания - ";
    cin >> R;

    cout << "Введите высоту - ";
    cin >> h;

    if(h > 0 && R > 0 && r > 0 && R != r) {
        cout << "ОбЪём равен " << (1.0/3)*h*M_PI*(R*R + R*r +r*r) << endl;
        cout << "Площадь поверхности равна " << M_PI*(R*R + (R + r)*(sqrt(h*h + (R- r)*(R - r))) + r*r);
    } else {
        cout << "Это уже не усечённый конус";
    }

    return 0;
}