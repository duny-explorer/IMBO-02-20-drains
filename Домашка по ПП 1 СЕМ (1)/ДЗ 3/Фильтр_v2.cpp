#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

bool isNum(string str) {
    if(str[0] == '.' || str[str.length() - 1] == '.'){
        return 0;
    }

    for(int i = 0; i < str.length(); i++) {
        if(!isdigit(str[i]) && str[i] != '.') return 0;
    }

    return 1;
}

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    ifstream text("D:/programing/projects/C++/HW3/13.txt"); // у меня просто через CMake поэтому полный путь. Пропишите мвой путь

    while(not text.eof()) {
        string word;
        text >> word;

        float num;

        if(isNum(word)) {
            cout << atof(word.c_str()) << endl;
        }
        //double num = strtod(word, NULL);
    }

    text.close();

    return 0;
}

