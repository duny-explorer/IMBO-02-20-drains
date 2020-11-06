#import <iostream>
#import <stdlib.h>
#import <time.h>
using namespace std;

int s;

int GSC1() {
    static int s1 = s;
    s1 = (37*s1 + 3) % 64;
    return s1;
}


int GSC2() {
    static int s2 = s;
    s2 = (25173*s2 + 13849) % 65537;
    return s2;
}


int main() {
    srand(time(NULL));
    s = rand();
    cout << GSC1() << endl;
    cout << GSC2() << endl;
    cout << GSC1() << endl;
    cout << GSC2() << endl;
    return 0;
}

