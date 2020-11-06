#include <iostream>
using namespace std;

int main() {
    int N, N2;

    cin >> N;
    N2 = 0;

    if(N < 1 && N > -10) {
        N2 = N - 1;
        N = 1;
    }

    if(N > 0) {
        for (int i = N; i < N + 10 + N2; i++) {
            cout << i << endl;
        }
    }


    return 0;
}

