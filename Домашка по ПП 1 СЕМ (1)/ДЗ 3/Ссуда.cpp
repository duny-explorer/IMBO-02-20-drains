#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
    double n, s, R=100000000, M, L=-100000000, m, D=0;
    cout << "Введите значения s, n, m: " << endl;
    cin >> s >> n >> m;
    while (R - L >= 0.000001)
    {
        M = (L + R) / 2;
        D = (s * M * pow((1 + M), n)) / (12 * (pow((1 + M), n) - 1));
        if (D > m)
            R = M;
        else
            L = M;
        
    }
    cout << setprecision(4) << L * 100 << endl;
}