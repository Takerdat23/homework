#include<iostream> 
using namespace std; 
bool check(int n)
{
    bool flag= true; 
    int prev=10; 
    while(n!=0)
    {
        if(prev>n%10)
        { 
            prev= n%10 ; 
            n=n/10;
            continue; 
        }
        if (prev= n%10) 
        {
            flag= false; 
            break; 
        }
        if(prev<n%10)
        {
            flag= false;
            break;
        }
    }
    return flag;
}
int main()
{
    int n; 
    cout<<"nhap n: ";
    cin>>n; 
    if(check(n)==1) cout<<"la so tang dan";
    else cout<<"khong la so tang dan";
    return 0;
}