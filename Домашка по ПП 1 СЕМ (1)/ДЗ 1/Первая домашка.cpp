#include <iostream>
using namespace std;
void code1();
void code2();
void code3();
void code4();

int main()
{   
	code3();

	return 0;
}


void code1() {
	cout << "Daria";
}

void code2() {
	float a, b;

	cin >> a >> b;
	cout << "+ - " << a + b << endl;
	cout << "- - " << a - b <<endl;
	cout << "* - " << a * b << endl;

	if (b != 0) {
		cout << "/ - " << a / b;
	}
	else {
		cout << "Error";
	}
}

void code3() {
	float a, b;

	cin >> a >> b;

	if (a == 0 && b == 0) {
		cout << "R";
	}
	else {
		if (b == 0) {
			cout << 0;
		}
		else {
			if (a == 0) {
				cout << "no answer";
			}
			else {
				cout << b / -a;
			}
		}
	}
}

void code4() {
	float a, b, c, x1, x2;
	float d;

	cin >> a >> b >> c;

	if (a == 0) {
		if (b == 0 && c == 0) {
			cout << "R";
		}
		else {
			if (c == 0) {
				cout << 0;
			}
			else {
				if (b == 0) {
					cout << "no answer";
				}
				else {
					cout << c / -b;
				}
			}
		}
	}
	else {
		d = b * b - 4 * a * c;

		if (d < 0) {
			cout << "no answer";
		}
		else {
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);

			if (d == 0) {
				cout << x1;
			}
			else {
				cout << x1 << x2;
			}
		}
	}
}


void code5() {
	bool lampa, shtora, day;

	cin >> lampa >> shtora >> day;

	if (shtora == 1 && day == 1 || lampa == 1) {
		cout << 'yes';
	}
	else {
		cout << 'no';
	}
}

