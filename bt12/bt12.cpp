#include<iostream>
using namespace std;
bool kiemtra(int so);
int main() {
	cout << "nhap mot so: ";
	int so = 0;
	cin >> so;
	if (kiemtra(so))
	{
		cout << "la so nguyen to";
	}
	else
	{
		cout << "khong phai la so nguyen to\a"<<"";
		double a = ceil(1.9);
		cout <<a<<"\a";
	}
	//cout << kiemtra(so);
}
bool kiemtra(int so) {
	int couter = 0;
	for (int i = 2; i < so; i++)
	{
		if (so % i == 0)
			++couter;
		if (couter == 1)
			break;
	}
	if (couter != 0)
	return false;
	else
	{
		return true;
	}
}