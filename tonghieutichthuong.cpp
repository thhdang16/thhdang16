#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "hay nhap so a: ";
    cin >> a;
    cout << "hay nhap so b: ";
    cin >> b;
    int tong = 0;
    int hieu =0;
    int tich=0;
    float thuong=0;
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    thuong=a/b;
    cout << "tong: "<<tong<<endl;
    cout << "hieu: "<<hieu<<endl;
    cout << "tich: "<<tich<<endl;
    cout << "thuong: "<<thuong<<endl;
    return 0;
}