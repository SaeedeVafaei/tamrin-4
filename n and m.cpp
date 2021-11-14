#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n, m, i, j;
	char a, b, c;
	a = '*';
	b = '#';
	cout << "enter n&m:"<<endl;;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (j % 2 == 0) {
				cout << b;
			}
			else {
				cout << a;
			}
		}
		cout << endl;
		c = a;
		a = b;
		b = c;
	}
	_getch();
}