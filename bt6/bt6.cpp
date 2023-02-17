#include <iostream>
using namespace std;
int giaithua(int so);
int main()
{
	cout << "nhap so a: ";
	int so;
	cin >> so;
	cout << "giai thua " << giaithua(so);
}
int giaithua(int so) {
	if (so==0)
	{
		return 1;
	}
	else
	{
		return so * giaithua(so - 1);
	}
}