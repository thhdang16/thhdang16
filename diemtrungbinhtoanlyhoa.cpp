#include <iostream>
using namespace std;
int main()
{
    float toan,ly,hoa;
    float dtb=0;
    cout << "diem mon toan: ";
    cin >> toan;
    float hstoan=2.0;
    cout << "diem mon ly: ";
    cin >>ly;
    float hsly=1.0;
    cout << "diem mon hoa: ";
    cin >> hoa;
    float hshoa=1.0;
    dtb=(toan*hstoan+ly*hsly+hoa*hshoa)/(hstoan+hsly+hshoa);
    cout << "diem trung binh cua ban la: "<<dtb;
    return 0;
}