#include<iostream>
using namespace std;
int main()
{
int a,b,n;
cout<<"enter the operator";
cin>>n;
cout<<"enter two numbers";
cin>>a>>b;
switch(n)
{
case 1: cout<<a+b;
    break;
case 2: cout<<b-a;
    break;
case 3:cout<<a*b;
    break;
default: cout<<"invalid input";
    break;
}
return 0;
}
