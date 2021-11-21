#include<iostream> 
using namespace std; 
int main()
{
    int n; 
    int i=1;
    int s=0; 
    cout<<"nhap n: ";
    cin>>n;
    while (i<=n)
    {
        if (n%i==0) s=s+1; 
        i++;
    }
    cout<<"so uoc so cua so n la : "<<s;
    return 0; 
}