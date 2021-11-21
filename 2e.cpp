#include <iostream> 
using namespace std; 
int main()
{
    int n; 
    int i=1; 
    double S=0;
    cout<<"nhap n: ";
    cin>> n;
    while(i<=n)
    {
        long  s=1 ;
        int j= 1; 
        while(j<=i)
        {
            s=s*j;
            j++;
        }
        S=S+s;
        i=i+1;
    }
    cout<<S;
    return 0;
}