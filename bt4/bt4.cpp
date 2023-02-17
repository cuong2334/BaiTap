#include<iostream>
using namespace std;
bool sosanh(int so);
int main() {
	cout << "kiem tra xem co phai la doi so ko";
	int so;
	cin >> so;
	cout << sosanh(so);
	return 0;
}
int daoso(int so) {
	int sodao=0;
	while (so != 0)
	{
		sodao = sodao*10 +so%10;
		so /= 10;
	}
	return sodao;
}
bool sosanh(int so) {
	if (so == daoso(so)) {
		return true;
	}
	else
	{
		return false;
	}
}
