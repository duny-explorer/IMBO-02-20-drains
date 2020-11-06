#include <iostream>
#include <cmath>
using namespace std;

double func(double S, double n, double m, double r){
    return (S * r* pow(1 + r, n)) / (12 * (pow(1+ r, n) - 1)) - m;
}

int main(){
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    double S, m, n;
    double eps = 0.01;

    cout << "Сумма заёма - ";
    cin >> S;

    cout << "На сколько лет - ";
    cin >> n;

    cout << "Месячная вырлата/Ежемесячный долг вам - ";
    cin >> m;

    double start = func(S, n, m, -1);

    // кек. Прога рабочая, НО. Скорее всего я где-то накосячила с типом данных, поэтому есть недочёты

    if(n > 0 && S > 0 && m > 0) {
        for(double i = -1 + eps ; i <= 1; i += eps) {
            double end = func(S, n, m, i);

            if(end == 0) {
                cout << "Процент - " << end * 100;

                return 0;
            }

            if(end * start < 0) {
                cout << "Процент - " << (2 * i - eps)/2 * 100;

                return 0;
            }

            start = end;
        }

        cout << "Для такого набора данных нет решения";

        return 0;

    } else {
        cout << "Недопустимые значения";
    }

    return 0;
}

