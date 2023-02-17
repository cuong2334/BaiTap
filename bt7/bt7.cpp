#include <iostream>
#include <math.h>
using namespace std;
int kiemtra(int so);
int nhan(int so, int chuso);

int main() {
	cout << "nhap mot so: ";
	int so=0;
	cin >> so;
	if (nhan(so, kiemtra(so)))
	{
		cout << "la so tu man " << nhan(so,kiemtra(so));
	}
	else
	{
		cout << "khong phai so tu man";
	}
}
int kiemtra(int so) {

	int couter1 = 0;
	while (so!=0)
	{
		++couter1;
		so /= 10;
	}
	return couter1;
}	
int nhan(int so,int chuso) {
	int sum = 0;
	int soss = so;
	while (so != 0) {
		sum += pow(so % 10, chuso);
		so /= 10;
	}
	if (sum == soss) {
		return chuso;
	}
	else
	{
		return 0;
	}
	
}
