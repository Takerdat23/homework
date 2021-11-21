#include <iostream> 
using namespace std; 
int main()
{
    int n; 
    float i=1.0; 
    double S=0.0;
    cout<<"nhap n: ";
    cin>> n;
    while(i<=n)
    {
        double  s=0.0 ;
        float j= 1.0; 
        while(j<=i)
        {
            s=s+j;
            j++;
        }
        S=S+1/s;
        i=i+1;
    }
    cout<<S;
    return 0;
}
