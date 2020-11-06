#include "matplotlibcpp.h"
#include <vector>
#import <cmath>
namespace plt = matplotlibcpp;
using namespace plt;
using namespace std;

int main() { // красиво графически. Кому интересно - объясню. Пришлось подправить библиотеку cmath и ое что прописать в cmake
    vector<double> Y;
    vector<double> X;
    float u = -6.0;

    for(int i = 0; i < 1200; i ++) {
        X.push_back(u);
        Y.push_back(sin(u));
        u += 0.01;
    }
    plot(X, Y);
    show();
}
