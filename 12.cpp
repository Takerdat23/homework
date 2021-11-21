#include <iostream> 
using namespace std; 
int main()
{
    int n; 
    float i=0.0; 
    double S=0.0;
    cout<<"nhap n: ";
    cin>> n;
    while(i<=n)
    {
        float s=1/(2*i+1)  ;
        S=S+s;
        i=i+1;
    }
    cout<<S;
    return 0;
}