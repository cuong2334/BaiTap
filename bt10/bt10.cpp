#include <iostream>
using namespace std;
 
bool hople(int ngay, int thang, int nam, int ngaymax);
int songay(int thang, int nam);
bool namnhuan(int nam);
void timngay(int ngay, int thang, int nam, int ngaymax, int hople);
int main() {
	int day, month, year;
	cout << "day";
	cin >> day;
	cout << "month";
	cin >> month;
	cout << "year";
	cin >> year;
	int ngaymax = songay(month, namnhuan(year));
	bool namN = hople(day, month, year, ngaymax);
	timngay(day, month, year, ngaymax, namN);
}
bool hople(int ngay, int thang, int nam, int ngaymax)
{
	if (ngay<1||ngay>ngaymax)
	{
		return false;
	}
	if (thang<1||thang>12)
	{
		return false;
	}
	if (nam < 1)
	{
		return false;
	}
}
int songay(int thang, int nam)
{
	switch (thang)
	{
	case 1:
	case 3:
	case 5:
	case 7 :
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
		if (nam)
			return 29;
		else return 28;
	
	}
}
bool namnhuan(int nam) {
	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
	{
		return true;
	}
	else return false;
}
void timngay(int ngay, int thang, int nam,int ngaymax,int hople)
{
	if(hople)
	{if (ngay == 1 && thang == 1) {
		cout << "31/12/" << nam - 1<<endl;
	}
	else if (ngay == 1 && thang != 1)
	{
		cout << ngaymax << "/" << thang - 1 << nam<<endl;
	}
	else
	{
		cout << ngay - 1 << "/" << thang << "/" << nam<<endl;
	}
	if (ngay == ngaymax && thang == 12)
	{
		cout << "1/1/" << nam + 1<<endl;
	}
	else if (ngay == ngaymax && thang != 12)
	{
		cout << "1/" << thang+ 1 << "/" << nam<<endl;
	}
	else
	{
		cout << ngay + 1 << "/" << thang << "/" << nam<<endl;
	}}
	else
	{
		cout << "khong hop le";
	}
}