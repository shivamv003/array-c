#include<iostream>
using namespace std;
int main()
{
    int n,last;
    int sum=0,root=0;
    cin>>n;
    while(n>0)
    {
        last=n%10;
        sum=sum+last;
        n=n/10;
    }
    cout<<sum<<"\n";
    if(sum>10)
    {
        while(sum>0)
        {
            last=sum%10;
            root=root+last;
            sum=sum/10;
        }
        
    }
    cout<<root;
    return 0;
}