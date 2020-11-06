#include <iostream>
using namespace std;

int main()
{
    bool lampa, shtory, solnce;
    cout << "Шторы открыты? (0 - нет/1 - да): ";
    cin >> shtory;
    cout << "Лампа горит? (0 - нет/1 - да): ";
    cin >> lampa;
    cout << "На улице день? (0 - нет/1 - да): ";
    cin >> solnce;

    if (shtory && solnce || lampa)
    {
        cout << "В комнате светло" << endl;
    }
    else 
    {
        cout << "Нам нужен свет, ударишься мизинцем" << endl;
    }
}
