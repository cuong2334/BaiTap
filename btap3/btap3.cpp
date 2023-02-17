#include <iostream>
using namespace std;
int sum(int so);
int tong;
int main()
{
	cout << "nhap mot chu so: ";
	int so;
	cin >> so;
	cout << "tong cac chu so la: " << sum(so);
}
int sum(int so) {
	if (so>10)
	{
		tong = tong + (so % 10);
		sum((so - so % 10) / 10);
	}
	else
	{
		return tong = tong + so;
	}
		
}