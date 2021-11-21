#include<iostream> 
using namespace std; 
int main()
{
    int n; 
    cout<<"nhap n: ";
    cin>>n;
    int i=2; 
    int count=0;
    while(n%i!=0 and i<n)
    {
        count= count+1; 
        i++;
    }
    if (count==n-2) cout<<"n la so nguyen to";
    else cout<<"khong la so nguyen to";
    
}