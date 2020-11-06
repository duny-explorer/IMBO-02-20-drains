#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x = -4, y;
    
    for (int i = 1; i <= 10; i++)
    {
    cout << fixed << showpoint;
    cout << setprecision(3);
    cout << "x = " << x << " *** " << "y = " << (x * x - 2 * x + 2) / (x - 1) << endl;
    x += 0.5;
    cout << " " << endl;
    }

    cout << "x = " << 1.000 << " *** " << "y = неоп" << endl; 
    cout << " " << endl;
    x = 1.5;

    for (int i = 1; i <= 6; i++)
    {
        cout << fixed << showpoint;
        cout << setprecision(3);
        cout << "x = " << x << " *** " << "y = " << (x * x - 2 * x + 2) / (x - 1) << endl;
        x += 0.5;
        cout << " " << endl; 
    }

}