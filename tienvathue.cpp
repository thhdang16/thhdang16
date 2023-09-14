#include <iostream>
using namespace std;
int main()
{
    int soluong,dongia;
    int tien=0;
    int thue=0;
    cout <<"so luong san pham: ";
    cin >> soluong;
    cout <<"don gia cua san pham: ";
    cin >>dongia;
    tien=soluong*dongia;
    cout <<"tong so tien la: "<<tien<<endl;
    thue=tien*0.1;
    cout <<"thue gia tri gia tang phai tra : "<<thue;
    return 0;
}