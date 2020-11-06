#include <iostream>
using namespace std;

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");

    int n1, m1;
    cout << "Сколько продавцов - ";
    cin >> n1;
    cout << "Сколько товаров - ";
    cin >> m1;

    float things[n1][m1];
    float count[m1][2];
    float result[n1][2];

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < m1; j++) {
            cout << "Количество товара " << j + 1 << " у " << i + 1 << "ого продавца - ";
            cin >> things[i][j];
        }
    }

    for(int i = 0; i < m1; i++) {
        cout << "Для " << i + 1 << "ого товара:" << endl;
        cout << "Цена и коммисионные - ";
        cin >> count[i][0] >> count[i][1];
    }

    for(int i = 0; i < m1; i++) {
        for(int k = 0; k < 2; k++) {
            float row = 0;

            for(int j = 0; j < n1; j++) {
                row += things[i][j] * count[j][k];
            }

            result[i][k] = row;
        }

    }

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    float max1 = result[0][0] + result[0][1];
    float min1 = result[0][0] + result[0][1];
    int prod_max = 1;
    int prod_min = 1;
    float min_com = result[0][1];
    float max_com = result[0][1];
    int prod_com_max = 1;
    int prod_com_min = 1;
    float com = 0;
    float res = 0;

    for(int i = 0; i < m1; i++) {
        if(max1 < result[i][0] + result[i][0]) {
            max1 = result[i][0] + result[i][0];
            prod_max = i + 1;
        }

        if(min1 > result[i][0] + result[i][0]) {
            min1 = result[i][0] + result[i][0];
            prod_min = i + 1;
        }

        if(min_com > result[i][1]) {
            min_com = result[i][1];
            prod_com_min = i + 1;
            cout << i << endl;
        }

        if(max_com < result[i][1]) {
            max_com = result[i][1];
            prod_com_max = i + 1;
        }

        com += result[i][1];
        res += result[i][0];
    }

    cout << "Продавец с наибольшой выручкой под номером " << prod_max << endl;
    cout << "Продавец с наименьшей выручкой под номером " << prod_min << endl;
    cout << "Продавец с наименьшими комиссионными под номером " << prod_com_min << endl;
    cout << "Продавец с наибольшими комиссионными под номером " << prod_com_max << endl;
    cout << "Общая выручка за товары " << res << endl;
    cout << "Общие комиссионыые " << com << endl;
    cout << "Общая сумма " << com + res;



    return 0;
}

// сделать с входными данными для таблиц