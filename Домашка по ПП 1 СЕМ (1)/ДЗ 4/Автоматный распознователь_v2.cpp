#import <iostream>
#import <map>
#import <string>
using namespace std;

int main() {
    system("chcp 65001"); // работает в CLion. Для Visual - setlocale(LC_ALL, "Russian");
    string num;
    int res = 0;
    map<char, int> decode = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100},
                             {'D', 500}, {'M', 1000}};

    cin >> num;

    int count = 1;
    res = decode[num[num.length() - 1]];

    for(int i = num.length() - 2; i > -1; i--) { // единственное, что забыла - это проверка на случай IVI
        int x = decode[num[i]];
        int x1 = decode[num[i + 1]];

        x == x1 ? count++: count = 0;

        if(count == 4){
            cout << "Неправильный формат числа";
            return 0;
        }

        if(x < x1){
            if((x == 1 || x % 10 == 0) && (x1 == x*5 || x1 == x*10)) {
                res -= x;
            } else {
                cout << "Недопустимый формат числа";
                return 0;
            }
        } else {
            res += x;
        }
    }

    cout << res;
}

