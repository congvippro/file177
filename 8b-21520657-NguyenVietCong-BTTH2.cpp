#include <iostream>

using namespace std;

int main()
{
    int n,n1,b,a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,i;
    cout << "nhap n: ";
    cin >> n;
    a0=0;a1=0;a2=0;a3=0;a4=0;a5=0;a6=0;a7=0;a8=0;a9=0;
    while(n>0)
    {
        b=n%10;
        switch (b)
        {
            case 0: a0=a0+1;break;
            case 1: a1=a1+1;break;
            case 2: a2=a2+1;break;
            case 3: a3=a3+1;break;
            case 4: a4=a4+1;break;
            case 5: a5=a5+1;break;
            case 6: a6=a6+1;break;
            case 7: a7=a7+1;break;
            case 8: a8=a8+1;break;
            case 9: a9=a9+1;break;
        }
        n=n/10;
    }
    cout << "cac so sau khi in theo thu tu tang dan la: ";
    while(a0>0) {cout << "0";a0=a0-1;}
    while(a1>0) {cout << "1";a1=a1-1;}
    while(a2>0) {cout << "2";a2=a2-1;}
    while(a3>0) {cout << "3";a3=a3-1;}
    while(a4>0) {cout << "4";a4=a4-1;}
    while(a5>0) {cout << "5";a5=a5-1;}
    while(a6>0) {cout << "6";a6=a6-1;}
    while(a7>0) {cout << "7";a7=a7-1;}
    while(a8>0) {cout << "8";a8=a8-1;}
    while(a9>0) {cout << "9";a9=a9-1;}
    return 0;
}
