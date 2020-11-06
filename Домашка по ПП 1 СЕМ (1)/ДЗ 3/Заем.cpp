
#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
    double s, p, n, m, r;
    cout << "Введите значения s, p, n: ";
    cin >> s >> p >> n;
    r = p / 100;
    if ((s < 0) || (n <= 0))
        cout << "Ловушка";
    else 
    {
        if (r == 0)
        {
            m = s / (n * 12);
            cout << m;
        }
        else
        {
            m = (s * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
            cout << m << endl;
        }
    }
}