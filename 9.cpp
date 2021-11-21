#include<iostream> 
using namespace std; 
int main()
{
    int a,b; 
    cout<<"nhap a,b: ";
    cin>>a>> b ;
    int temp; 
    int max=-1;
    if(a>b) 
    {
        temp= b;
        b=a;
        a=temp; 
    }  
    int i=1; 
   while (i<=a)
   {
       if(a%i==0 and b%i==0) 
       {
           if (i>=max) max= i; 
       }
       i++;
   } 
   cout<<"uoc chung lon nhat la: "<<max; 
   return 0; 
}