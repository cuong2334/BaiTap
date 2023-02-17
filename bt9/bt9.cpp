#include <iostream>
using namespace std;

bool hople(int nam, int	thang, int ngay, int ngaymax);
bool namnhuan(int nam);
int ngaymax(int thang, int nam);
int main() {
	int day, month, year;
	cout << "Day: ";
	cin >> day;
	cout << "month: ";
	cin >> month;
	cout << "year: ";
	cin >> year;
	int ngay = 0;
	ngay = ngaymax(month, namnhuan(year));
	if (hople(year, month, day, ngay)) {
		cout << "OK" << endl;

	}
	else
	{
		cout << "ERROR" << endl;
	}
}
bool hople(int nam, int	thang, int ngay,int ngaymax) {
	if (nam < 0)
	{
		return false;
	}
	
	if (thang<1||thang>12)
	{
		return false;
	}
	
	if (ngay<1||ngay>ngaymax)
	{
		return false;
	}
}
bool namnhuan(int nam)
{
	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
		return true;
	else
	{
		return false;
	}
}
int ngaymax(int thang, int nam)
{
	switch (thang)
	{
	case 1:
	case 5:
	case 3:
	case 7:
	case 8:
	case 11:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 10:
	case 12:
		return 30;
		break;
	case 2 :
		if (nam) {
			return 29;
		}
		else
		{
			return 28;
		}
	}
}