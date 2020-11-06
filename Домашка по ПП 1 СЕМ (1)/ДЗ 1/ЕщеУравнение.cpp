#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    
   if (a == 0)
   {
        if(b != 0)
        { 
        cout << "Решением уравнения x = " << -c/b << endl;
        return 0;
        }
        else
        {
        cout << "У уравнения нет решения" << endl;
        return 0;
        }
   }
   else
   {
        if((b*b - 4*a*c) > 0)
        {
            x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
            cout << "Первый корень уравнения равен: " << x << endl;
            x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
            cout << "Второй корень уравнения равен: " << x << endl;
        }
    
        else if((b*b - 4*a*c) == 0)
        {
            x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
            cout << "Единственный корень уравнения равен: " << x << endl;
        }
        else
        {
            cout << "Корней нет." << endl;
        }
 
        return 0;
   }
   
}

