#include<iostream> 
using namespace std; 
int main()
{
    int n; 
    int i=1;
    int s=0; 
    cout<<"nhap n: ";
    cin>>n;
    while (i<=n)
    {
        if (n%i==0) s=s+i; 
        i++;
    }
    cout<<" tổng tất cả các ước nguyên dương của n là : "<<s;
    return 0; 
}