#include <iostream>
using namespace std; 
int main()
{
    int n;
    cout<<"nhap n: ";
    cin>>n;
    int m=n; 
    int dao=0; 
    int sodu; 
    while (m!= 0)
    {
        sodu= m%10;
        m=m/10;
        dao= dao*10 +sodu;
    }
    if (dao==n)  cout<<"la so doi xung";
    else cout<<"khong la so doi xung";
    return 0;
}