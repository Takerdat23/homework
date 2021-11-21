#include <iostream> 
using namespace std; 
int main()
{
    int n;
    cout<<"nhap n: ";
    cin>>n;
    int i = 1; 
    while(i<=n)
    {
        if (i*i==n)
        { 
            cout<<"n la so chinh phuong";
            break;
        }
        if (i*i > n)
        {
            cout<<"n khong la chinh phuong";
            break;
        }
        i++;
    }
    return 0;
}