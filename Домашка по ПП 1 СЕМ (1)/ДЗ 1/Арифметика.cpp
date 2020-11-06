#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    if (b == 0)
    {
        cout << "Сложение: " << a+b << endl;
        cout << "Вычитание: " << a-b << endl;
        cout << "Умножение: " << a*b << endl;
        cout << "Деления не существует, т.к. делим на ноль." << endl;
        return 0;
    }
    else
    {
        cout << "Сложение: " << a+b << endl;
        cout << "Вычитание: " << a-b << endl;
        cout << "Умножение: " << a*b << endl;
        cout << "Деление: " << a/b << endl;
        return 0;
    }
    
    
}
