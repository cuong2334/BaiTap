#include <iostream>

using namespace std;
int demso(int so);
int main() {
	cout << "nhap mot so: ";
	int so;
	cin >> so;
	cout << "chu so c0 " << demso(so);
	return 0;
}
int demso(int so)
{
	int icount=0;

	while (so!=0)
	{
		so /= 10;
		icount++;
	}
	return icount;
}