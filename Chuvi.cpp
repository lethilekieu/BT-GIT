#include<iostream>;
using namespace std;
const double PI = 3.14159;
float cVVuong(int a);
float dTVuong(int a);
float cVChuNhat(int a,int b);
float dTChuNhat(int a, int b);
float cVTron(int a);
float dTTron(int a);




float cVVuong(int a) {
	return 4*a;
}
float dTVuong(int a) {
	return a * a;
}
float cVChuNhat(int a, int b) {
	return (a + b) * 2;
}
float dTChuNhat(int a, int b) {
	return a * b;
}
float cVTron(int a) {
	return 2 * PI*a;
}
float dTTron(int a) {
	return PI * a*a;
}
void main() {
	int a;
	cout << "Nhap canh hinh vuong: ";
	cin >>a;
	cout << "Chu vi hv: " << cVVuong(a) << " Dien tich hv: " << dTVuong(a);
	int b,c;
	cout << "Nhap chieu dai cn: ";
	cin >> b;
	cout << "Nhap chieu rong cn: ";
	cin >> c;
	cout << "Chu vi hcn: " << cVChuNhat(b,c) << " Dien tich hv: " << dTChuNhat(a,b);

	int d;
	cout << "Nhap ban kinh ht: ";
	cin >> d;
	cout << "Chu vi ht: " << cVTron(d) << " Dien tich hv: " << dTTron(d);
	system("pause");
}