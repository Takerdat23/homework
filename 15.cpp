#include<iostream> 
using namespace std; 
int main()
{
    int n; 
    int i=1;
    cout<<"nhap n: ";
    cin>>n;
    while (i<=n)
    {
        if (n%i==0) cout<<i<< " "; 
        i++;
    }
    cout<<" la cac uoc cua n";
    return 0; 
}