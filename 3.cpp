#include<iostream> 
using namespace std ; 
int timsochiahet(int n, int a , int b)
{
    int i=1; 
    int tong =0 ; 
    while (i<= n)
    {
        if (a% i==0 and b%i != 0)  tong = tong +i; 
        i++; 
    }
    return tong; 
}
int main()
{
    int n, a,b;
    cout<<"nhập a,b: ";
    cin>>a >> b; 
    cout<<"nhap n: ";
    cin>> n; 
    if (n < a or n < b)
    {
        cout<<"yeu cau nhap lai: ";
        cin>> n; 
    }
    cout<<timsochiahet(n ,a,b) ; 
    return 0; 
}