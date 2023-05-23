#include<iostream>
using namespace std;


int main()
{
    int a,b,j;
    cin>>a>>b;
    int lcm=j;
    if(a>b)
    {
        j=a;
    }
    else
    {
        j=b;
    }
    cout<<"largest no"<<j<<"\n";
    int end=a*b;
    for(int i=j;i<=end;i++)
    {
        if(i%a==0 and i%b==0)
        {
           lcm=i;
           break;
        }
    }
    cout<<"lcm of two number is"<<lcm;
    return 0;

}