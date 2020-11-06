#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f("TextForCopy.txt");

    if (f.is_open())
        cout << "\n" << f.rdbuf() << "\n" << endl;
    f.close();
}