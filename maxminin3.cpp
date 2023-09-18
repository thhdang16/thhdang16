#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a,b,c,max,min;
    cin >> a >> b >> c ;
    max=a;
    if (b>max){
        max=b;
    }
    if (c>max){
        max=c;
    }
    cout << "so lon nhat la: " << max << endl;
    min=a;
    if (b<min){
        min=b;
    }
    if (c<min){
        c=min;
    }
    cout << "so be nhat la: " << min << endl;
    return 0;
    

}