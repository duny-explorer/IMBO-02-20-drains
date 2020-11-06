#include <iostream>
using namespace std;

int sign(float num) {
    if(num > 0) return 1;

    if(num == 0) return 0;

    return -1;
}

int main() {
    float x;
    cin >> x;
    cout << sign(x);
    return 0;
}

