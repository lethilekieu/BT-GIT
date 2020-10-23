#include<iostream>;
using namespace std;
const double PI = 3.14159;
float cVVuong(int a);

float cVChuNhat(int a,int b);

float cVTron(int a);





float cVVuong(int a) {
	return 4*a;
}

float cVChuNhat(int a, int b) {
	return (a + b) * 2;
}

float cVTron(int a) {
	return 2 * PI*a;
}

void main() {
	int a;
	cout << "Nhap canh hinh vuong: ";
	cin >>a;
	cout << "Chu vi hv: " << cVVuong(a)<<endl;
	int b,c;
	cout << "Nhap chieu dai cn: ";
	cin >> b;
	cout << "Nhap chieu rong cn: ";
	cin >> c;
	cout << "Chu vi hcn: " << cVChuNhat(b,c) << endl;

	int d;
	cout << "Nhap ban kinh ht: ";
	cin >> d;
	cout << "Chu vi ht: " << cVTron(d) << endl;
	system("pause");
}