#include <iostream> 
using namespace std; 
int tinh_tong(int n) 
{
    int sodu; 
    int tong =0; 
    while(n>10)
    {
        sodu = n%10; 
        tong =tong +sodu; 
        n=n/10; 
    }
    tong = tong +n; 
    return tong; 
}
int tinh_tich(int n)
{
    int sodu; 
    int tich =1; 
    while(n>10)
    {
        sodu = n%10; 
        tich =tich * sodu; 
        n=n/10; 
    }
    tich = tich * n ; 
    return tich; 
}
int main()
{
    int n= 10; 
    while( n>=10 and n<=99 )
    {
        if (2* tinh_tong(n)== tinh_tich(n)) cout<<n<<" ";
        n++;  
    }
    return 0; 
}