#include <iostream>
//#include <graphics.h>
#include <vector>
#include <cmath>
using namespace std;

void rectangle(double x1, double x2, double y1, double y2) { // любимые координаты
    x1 != x2 && y1 != y2 ? cout << abs(x1 - x2)*abs(y1 - y2) : cout << "wrong data";
}

void krug(double x1, double x2, double y1, double y2) {
    cout << sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2))*M_PI;
}

double triangle(double x1, double x2, double x3, double y1, double y2, double y3) {
    double a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    double b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
    double c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    double p = (a + b + c)/2;

    (a < b + c && b < a + c && c < b + a) ? cout << sqrt(p*(p - a)*(p - b)*(p - c)) :
    cout << "Неправильные данные";
}

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    int flag;
    cout << "Площадь какой фигуры хотите найти? ";
    cin >> flag;

    if(flag == 0) {
        double x1, x2, y1, y2;
        cout << "Введите координаты центра: ";
        cin >> x1 >> y1;
        cout << "Введите кордтаты любой точки на окружности: ";
        cin >> x2 >> y2;
        krug(x1, x2, y1, y2);
        return 0;
    }

    if(flag == 4) {
        double x1, x2, y1, y2;
        cout << "Введите координаты правого одного из углов: ";
        cin >> x1 >> y1;
        cout << "Введите координаты противоположного угла: ";
        cin >> x2 >> y2;
        rectangle(x1, x2, y1, y2);
        return 0;
    }

    double x1, x2, x3, y1, y2, y3;
    cout << "Введите координаты одной из вершин: ";
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины: ";
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины: ";
    cin >> x3 >> y3;
    triangle(x1, x2, x3, y1, y2, y3);
}

