#include <iostream>
using namespace std;
void kiemtra(int start, int stop);
bool namnhuan(int nam);
int main() {
	cout << "nhap nam bat dau: "<<endl;
	int start;
	cin >> start;
	cout << "nhap nam ket thuc: " << endl;
	int stop;
	cin >> stop;
	kiemtra(start, stop);
}
void kiemtra(int start, int stop){
	for (int i = start; i <= stop; i++) {
		if (namnhuan(i))
			cout << i << "\t";
		
}
}
bool namnhuan(int nam) {
	if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
	{
		return true;
	}
	else return false;
}