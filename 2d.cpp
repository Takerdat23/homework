#include <iostream> 
using namespace std; 
int main()
{
    int n; 
    cout<<"nhap n: ";
    cin>>n;
    long S=1;
    int i=1; 
    while(i<=n)
    {
        S=S*i;
        i++;
    }
    cout<<S;
    return 0; 
}