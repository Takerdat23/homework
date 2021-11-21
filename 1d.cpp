#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cout<<"nhap n: ";
    cin>>n;
    int sodu; 
    int max=0;
    int min =10;
    int i=1; 
    while(n!=0)
    {
        sodu=n%10; 
        n=n/10;
        if (sodu>max) max= sodu; 
        else if  (sodu<min) min= sodu;
        i++; 
    }  
    cout<<max<< min; 
    return 0; 
}

