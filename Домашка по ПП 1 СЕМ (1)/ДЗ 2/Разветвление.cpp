#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, a, w;
    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число a: ";
    cin >> a;

    if(abs(x) < 1 && x != 0)
    {
        double w = a * log(abs(x));
        cout << "w = " << w << endl;
        return 0;
    }
    else if ((abs(x) >= 1) && (pow(x, 2) <= a))
    {
        double w = pow(a - pow(x, 2), 0.5);
        cout << "w = " << w << endl;
        return 0;
    }
    else
    {
        cout << "Ловушка" << endl;
    }
       
}
