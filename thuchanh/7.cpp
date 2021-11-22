#include <iostream> 
using namespace std; 
void kiemtra_tam(int a,int b, int c)
{
    if (a+b> c && b+c> a && a+c>b)
    {
        if (a*a== b*b+c*c || b*b== a*a+ c*c || c*c == b*b + a*a )
        {
            cout<<"tam giac vuong"; 
        }
        else if (a==b && b== c) 
        {
            cout<<"tam giac deu"
        }
        else if (a==b || b==c|| c==a)
        {
            cout<<"tam giac can"; 
        }
        else cout<<"tam giac thuong"; 
    }
    else 
    {
        cout<<"yeu cau nhap lai: "; 
    }
}
void nhap_canh(int &a, int &b, int &c)
{
    do
    {
        cout<<"nhap a,b,c: ";
        cin>>a>>b>>c; 
    } while (a<0 && b< 0 && c< 0 );
}
int main()
{
    int a,b,c; 
    nhap_canh(a,b,c); 
    kiemtra_tam(a,b,c); 
    return 0
}