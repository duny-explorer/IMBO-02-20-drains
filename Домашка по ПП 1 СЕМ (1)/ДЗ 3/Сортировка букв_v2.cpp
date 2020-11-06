#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
string alfabet = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

bool descending(long a, long b) { return alfabet.find(a) < alfabet.find(b); } // можно через пузырёк, но я за лаконичность кода

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    vector<char> w;
    string in;

    cin >> in;

    for(auto  i: in){
        w.push_back(i);
    }



    for(char i: w) {
        cout << i;
    }

    cout << endl;

    sort(w.begin(), w.end(), descending);

    for(char i: w) {
        cout << i;
    }

    return 0;
}

