#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter three no";
   cin>>a>>b>>c;
   if(a>b && a>c)
   { 
     cout<<a<<"is greater";
   }
   else if(b>c & b>a)
   {
    cout<<b<<"is geater";
   }
   else 
   cout<<c<<"is greater";
   return 0;

}