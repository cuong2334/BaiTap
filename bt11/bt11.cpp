#include<iostream>
using namespace std;
bool kiemtra(int ngay, int thang, int nam, int ngaymax);
bool namnhuan(int nam);
int songay(int thang, int nam);
int dem(int ngay, int thang, int nam);
int main() {
	int day, month, year;
	cout << "day: ";
	cin >> day;
	cout << "month: ";
	cin >> month;
	cout << "year: ";
	cin >> year;
	int ngaymax = songay(month, year);
	if (kiemtra(day, month, year, ngaymax))
	{
		cout << "thu tu cua ngay trong nam la: " << dem(day, month, year);
	}
	else
	{
		cout << "ngay khong hop le";
			
	}
}
bool kiemtra(int ngay, int thang, int nam, int ngaymax)
{
	if (nam<0)
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
bool namnhuan(int nam) {
	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
		return true;
	else
	{
		return false;
	}
}
int songay(int thang, int nam) {
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		if (namnhuan(nam))
			return 29;
		else return 28;
	
	}
}
int dem(int ngay, int thang, int nam) {
	int dem=0;
	while (thang!=0)
	{
		thang = thang - 1;
		dem += songay(thang, nam);
		
	}
	dem += ngay;
	return dem;
}