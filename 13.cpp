#include<iostream> 
#include <math.h>
using namespace std; 
int main()
{
    int n; 
    cout<<"nhap n: ";
    cin>>n; 
    float x; 
    cout<<"nhap x: "; 
    cin>>x; 
    int i=1; 
    float s=0; 
    while(i<=n)
    {
        s=s+ 1.0/(i* pow(x,i+1)); 
        i++ ; 
    }
    cout<<s; 
    return 0; 
}