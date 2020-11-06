#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    ifstream text("D:/programing/projects/C++/HW3/13.txt"); // у меня просто через CMake поэтому полный путь. Пропишите мвой путь

    while(text) {
        string line;
        getline(text, line);
        cout << line << endl;
    }

    text.close();

    return 0;
}