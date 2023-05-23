#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                n=n/i;
                cout<<i<<" ";
                break;
            
            }
            
            
        }
    }
    
    return 0;
}