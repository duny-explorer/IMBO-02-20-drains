#include <iostream>
#include <fstream>
using namespace std;

#define FILE_NAME "my_file.txt"

int main() 
{
	ifstream file(FILE_NAME);
	int b;
	do
	{
		if(file >> b) 
			cout << b << endl;
		else
		{
			file.clear();
			file.ignore(1, ' ');
		}
	}
	while(!file.eof());
	file.close();
	return 0;
}