#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    map<char, int> num = {{'1', 1}, {'2', 2}, {'3', 3}, {'4', 4}, {'5', 5}, {'6', 6},
                          {'7', 7}, {'8', 8}, {'9', 9}, {'A', 10}, {'B', 11},
                          {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}, {'0', 0}};

    map<int, char> ch = {{1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'},
                          {7, '7'}, {8, '8'}, {9, '9'}, {10, 'A'}, {11, 'B'},
                          {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'}, {0, '0'}};

    int N1, N2, res_10; // были каие-то косяки, но я не помню
    res_10 = 0;
    string x;
    vector<char> res_num;

    cin >> x >> N1 >> N2;

    for(int i = x.length() - 1; i > -1; i--) {
        int one = num[x[i]];
        res_10 += pow(N1, x.length() - i - 1) * one;
    }

    cout << res_10 << endl;

    while(res_10 > 0) {
        res_num.push_back(ch[res_10 % N2]);
        res_10 = res_10 / N2;
    }

    for(int i = res_num.size() - 1; i > -1; i--) {
        cout << res_num[i];
    }



}

