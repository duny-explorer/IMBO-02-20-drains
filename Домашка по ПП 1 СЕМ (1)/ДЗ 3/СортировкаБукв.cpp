#include <iostream>
#include <string>
using namespace std;

void sort(string st)
{
	for (int i = 0; i < st.length(); i++)
		for (int j = 0; j <st.length(); j++)
		{
			int a = int(st[j]);
			int b = int(st[j+1]);
			if (a > b)
			{
				char buf = st[j];
				st[j] = st[j+1];
				st[j+1] = buf;
			}
		}
	cout << st << "\n";
}
int main()
{
	string str;
    cout << "Введите строку: ";
    cin >> str;
	sort(str);
}