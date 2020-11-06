#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void triangle(double a, double b, double c) { // это версия через параметры фигуры. Интерфейс так себе, можете через строки сделать. Мне лень исправлять
    double p = (a + b + c) / 2.0;
    (a < b + c) && (b < a + c) && (c < b + a) && c > 0 && b > 0 && a > 0 ? cout << sqrt(p*(p - a)*(p - b)*(p - c)) :
    cout << "Неправильные данные";
}

void krug(double r) {
    r >= 0 ? cout << M_PI*r*r : cout << "Неправильные данные";
}

double rectangle(double a, double b) {
    a > 0 && b > 0 ? cout << a * b : cout << "Неверные данные";
}

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    int flag;
    cout << "Площадь какой фигуры хотите найти? 0 - круг 3 - треугольник, 4 - квадрат ";
    cin >> flag;

    if(flag == 0) {
        double r;
        cout << "Введите радиус: ";
        cin >> r;
        krug(r);
        return 0;
    }

    if(flag == 4) {
        double a, b;
        cout << "Введите размеры ширины и высоты: ";
        cin >> a >> b;
        rectangle(a, b);
        return 0;
    }

    if(flag == 3) {
        double a, b, c;
        cout << "Введите три стороны: ";
        cin >> a >> b >> c;
        triangle(a, b, c);
    }



    return 0;
}

