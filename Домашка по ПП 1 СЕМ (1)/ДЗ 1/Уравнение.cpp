#include <iostream>
using namespace std;

int main()
{
    float b, c, x;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;
    if(b != 0)
    { 
        cout << "Решением уравнения x = " << -c/b << endl;
        return 0;
    }
    else
    {
        cout << "У уравнения нет решения" << endl;
    }
    return 0;
}