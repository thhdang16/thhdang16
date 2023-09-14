#include <iostream>
using namespace std;
int main()
{
    const int pi=3.14;
    float r;
    float chuvi=0;
    float dientich=0;
    cout <<"hay nhap ban kinh: ";
    cin >> r;
    chuvi=2*r*pi;
    cout <<"chu vi hinh tron la: "<<chuvi<<endl;
    dientich=pi*r*r;
    cout << "dien tich hinh tron la: "<<dientich;
    return 0;
}