#include <iostream> 
using namespace std; 
int main()
{
    int n; 
    cin>> n; 
    int i =0 ;
    int S=0 ;
    while(i<=n)
    {
        S= S+i ;
        i=i+1;
    }
    cout<<S;
    return 0; 
}