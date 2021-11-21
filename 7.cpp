#include <iostream> 
using namespace std; 
int main()
{
    int n; 
    cout<<"nhap n: ";
    cin>>n;
    int sodu; 
    int dao=0; 
    while(n>=10)
    {
        sodu=n%10;
        dao=dao*10+ sodu ; 
        n=n/10;
    }
    dao=dao*10+ n;
    cout<<"so dao nguoc la: "<<dao; 
    return 0;
}