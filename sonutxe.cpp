#include <iostream>
using namespace std;
int main()
{
    int n,n1,n2,n3,n4,N,sum;
    cout <<"nhap bien so xe 5 chu so: ";
    cin >> n;
    if (n<=99999)
    {
        n1=n%10;
        n=(n-n1)/10;
        n2=n%10;
        n=(n-n2)/10;
        n3=n%10;
        n=(n-n3)/10;
        n4=n%10;
        n=(n-n4)/10;
        sum=n+n1+n2+n3+n4;
        N=sum%10;
        cout << "so nut la: " << N;
    }
    else cout <<"du lieu khong hop le!";    
    return 0;
    
}