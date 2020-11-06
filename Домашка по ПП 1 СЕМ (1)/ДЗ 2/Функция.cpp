#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, b, z;
    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;
    cout << "Введите число b: ";
    cin >> b;

    if (b - y > 0 && b >= x)
    {
        double z = log(b-y) * pow((b-x), 0.5);
        cout << "z = " << z << endl;
    }
    else
    {
        cout << "Ловушка или Неопределено" << endl;
    }
    
}