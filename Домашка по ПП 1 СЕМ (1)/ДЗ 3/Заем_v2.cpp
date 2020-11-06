#include <iostream>
#include <cmath>
using namespace std;

int main(){
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    double S, p, n, r;

    cout << "Сумма заёма - ";
    cin >> S;

    cout << "На сколько лет - ";
    cin >> n;

    cout << "Под какой процент - ";
    cin >> p;

    r = p/100;

    if(S >= 0 && n >= 0 && p >= 0 && p <= 100) {
        if(p==0) {
            cout << "Месячная выплата - " << S/(12*n);
        } else {
            if(n == 0) {
                cout << 0;
            } else {
                cout << "Месячная выплата - " << (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
            }
        }

    } else {
        if(S >= 0 && n >= 0 && p < 0 && p >= -100) {
            if(p == -100) {
                cout << 0;
            } else {
                cout << "Месячная выплата - " <<  (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
            }
        }
    }

    return 0;
}
