#include <iostream> 
using namespace std; 
int timnguyento(int i, int n)
{
    if ( n % i!=0 ) return i ; 
    else return 0 ; 
}
int main()
{
    int n; 
    cout<<"nhap n: "; 
    cin>>n; 
    int j =1; 
    int tong =0 ; 
    while(j<n)
    {
        tong =tong +  timnguyento(j,n); 
        j++; 
    }
    cout<<tong; 
    return 0; 
}