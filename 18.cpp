#include<iostream> 
using namespace std; 
int main()
{
    int n; 
    int i=1;
    long s=0; 
    cout<<"nhap n: ";
    cin>>n;
    while (i<=n)
    {
        if (n%i==0) 
        {
            if (i%2==0) s=s+i; 
        } 
        i++;
    }
    cout<<" tong cac uoc chan cua n la "<<s;
    return 0; 
}