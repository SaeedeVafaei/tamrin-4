#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n, sum = 1;
	cout << "adad ra vared konid : "<<endl;
	cin >> n;
	for (int i = 1; i<n; i++)
	{
		if (sum<n)
		{
			sum = sum*i;
		}


	}
	if (sum == n)
	{
		cout << "yes!!";
	}
	else
		cout << "no!!";
	
	_getch();
}