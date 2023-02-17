#include <iostream>
#include <C:\Users\mind\Desktop\Cpp\Btap2\Constants.h>

double tien(double cay);
using namespace std;
using namespace constants;

int main()
{
    cout << "So Km di duoc: ";
    double km;
    cin >> km;
    cout << "So tien phai ta la :" << tien(km) <<"d";
}
double tien(double cay) {
    int t;
    if (cay <= nguong1)
    {
        t = cay * gia1;
    }
    else if (nguong1 < cay && cay <= nguong2)
    {
        t = nguong1 * gia1 + (cay - nguong1) * gia2;
    }
    else {
        if (nguong2 < cay && cay < nguong3)
        {
            t = nguong1 * gia1 + nguong2 * gia2 + (cay - nguong1 - nguong2) * gia3;    /* code */
        }
        else
        {
            t = (nguong1 * gia1 + nguong2 * gia2 + (cay - nguong1 - nguong2) * gia3) * (1 - giamgia);
        };

    };
    return t;
}
