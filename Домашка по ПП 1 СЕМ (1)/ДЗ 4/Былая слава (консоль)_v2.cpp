#include <iostream>
using namespace std;

int main() { // версия через консоль
    for(int i = 0; i < 13; i++) {
        if(i < 6) {
            for(int j = 0; j < 8; j++) cout << "*";
            for(int j = 8; j < 50; j ++) cout << "-";
        } else {
            for(int j = 0; j < 50; j++) cout << "-";
        }

        cout << endl;
    }
    return 0;
}
