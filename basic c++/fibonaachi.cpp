#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    int a=0,b=1;
    cout<<"0 1 ";
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    return 0;
}