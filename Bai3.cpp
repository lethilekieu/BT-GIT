#include "iostream"
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void phepCong(int &kq) {
	int a = rand() % 100 + 1;
	int b = rand() % 100 + 1;
	cout << "so a :" << a << endl;
	cout << "So b :" << b << endl;
	cout << "a" << a << "+" << "b" << b << "=" << a + b;
}
bool kiemTra(int x, int a, int b) {
	for (int i = 0; i < 100; i++) {
		int tong = a + b;
		if (tong == x)
			return true;
		else
			return false;
	}
	
}
int main() {
	int a, b, x;
	srand(time(NULL));
	a = (rand() % 100) + 1;
	b = (rand() % 100) + 1;
	cout << a << "+" << b << "=";
	cin >> x;
	if (kiemTra(x, a, b) == true) {
		cout << "dung";
	}
	else {
		cout << "sai";
	
	}
	system("pause");
	return 0;
}