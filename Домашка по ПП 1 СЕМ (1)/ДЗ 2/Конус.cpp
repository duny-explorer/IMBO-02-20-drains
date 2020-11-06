#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double pi = 3.141592653;

int main()
{
    double V, S, h, R, r, l;
    cout << "Введите r: "; // верхнее основание
	cin >> r;
    cout << "Введите R: "; // R основания
    cin >> R;
    cout << "Введите h: "; // высоту
    cin >> h;

    if (r > 0 && R > 0 && h > 0 && R != r) // отрицательные числа и всякие нули и ловушки на чек
    {
        l = sqrt(abs(R - r) * abs(R - r) + h * h);
	    V = ((pi * h) / 3) * (R * R + R * r + r * r);
	    S = pi * (R * R + (R + r) * l + r * r);
        cout << "S = " << S << endl << "V = " << V << endl;
        return 0;
	}
    else
    {
        cout << "Уклон от ловушки" << endl;
        return 0;
    }
}