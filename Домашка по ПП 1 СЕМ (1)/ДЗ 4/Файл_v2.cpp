#include <iostream>
#include <fstream>
//#include <random>
#include <string>
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
    ofstream file("D:/programing/projects/C++/HW4/file.txt"); // СВОЙ ПУТЬ К ФАЙЛУ
    string num;

    for(int i = 0; i < 10; i++) {
        cin >> num;
        file << num << endl;
    }

    file.close();

    ifstream file_num("D:/programing/projects/C++/HW4/file.txt"); // СВОЙ ПУТЬ К ФАЙЛУ
    int result = 0;

    while(file_num) {
        string line;

        file_num >> line;
        if(isNum(line)) {
            result += atoi(line.c_str());
        }
    }

    file_num.close();

    cout << result;

    return 0;
}
