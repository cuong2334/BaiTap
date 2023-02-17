#include <iostream>
using namespace std;
double tien(double cay){
    int t;
if ( cay<=1)
{
    t= cay*1500;
}
else if (1<cay&&cay<=5)
{
t = 1*1500 + (cay-1)*1350;
}
else{
    if (5<cay&&cay<120)
    {
    t=1*1500+5*1350+(cay-6)*1100;    /* code */
    }
    else
    {
       t=(1*1500+5*1350+(cay-6)*1100)*0.9 ;
    };
    
};
return t;
};
int main()
{
    cout << "So Km di duoc: ";
    double km;
    cin >> km;
    cout << "So tien phai ta la :"<< tien(km);
};
