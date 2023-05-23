#include<iostream>
using namespace std;

int primeno(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
           cout<<i<<" ";
            
        }
    }
    return true;

}

int main()
{
    int n;
    cout<<"enter no to check prime no";
    cin>>n;
    primeno(n);
    return 0;

}
