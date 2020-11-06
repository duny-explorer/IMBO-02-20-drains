#include <iostream>
using namespace std;

float func(float x) {
    return (x*x - 2*x + 2)/(x - 1);
}

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    bool nul = true;


    // скорее всего вас переделать этот блок кода, используя iomanip

    for(float i = -4; i <= 4; i += 0.5) {
        if(i == 1) {
            cout << "y(" << i << ")";

            if(nul){
                if(i < 0) {
                    cout << "  ";
                } else {
                    cout << "   ";
                }

                nul = false;
            } else {
                if(i < 0) {
                    cout << "";
                } else {
                    cout << " ";
                }
                nul = true;
            }
             cout << "= Не существует" << endl;
          } else {
              cout << "y(" << i << ")";

              if(nul){
                  if(i < 0) {
                      cout << "  ";
                  } else {
                      cout << "   ";
                  }

                  nul = false;
              } else {
                  if(i < 0) {
                      cout << "";
                  } else {
                      cout << " ";
                  }
                  nul = true;
              }

              cout << "=";

              string x = to_string(func(i));
              for(int i = 0; i < 9 - x.length(); i++) {
                  cout << " ";
              }
              cout << x << endl;
          }


    }
    return 0;
}

