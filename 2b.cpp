#include <iostream> 
using namespace std; 
int main()
{
    int n; 
    int  x; 
    cout<<"hãy nhập n: ";
    cin >> n;
    cout<<"hãy nhập x: ";
    cin>> x; 
    int  S=1 ; 
    int i= 1; 
    while (i<=n);
    {
        S=S*x;
        i=i+1;
    }
    cout<<S;
    return 0; 
}