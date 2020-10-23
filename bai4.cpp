#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
bool ktKetQua(int a, int b, int x)
{
	for (int i = 0; i < 100; i++)
	{
		int hieu = a - b;
		if (hieu == x)
		{
			return true;

		}
		else
		{
			return false;
		}
	}
}

int main()
{
	int a, b, x;
		srand(time(NULL));
	a = (rand() % 100) + 1;
	b = (rand() % 100)+1;
	cout << a << "-" << b << "=";
	cin >> x;
	if (ktKetQua(x, a, b) == true)
	{
		cout << "dung";
	}
	else
	{
		cout << "sai";
	}
	system("pause");
	return 0;

}