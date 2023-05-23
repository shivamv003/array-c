//GCD OF TWO NUMBERS
#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b;
    int rem=1;
    if(a>b)
    {
        n=b;
    }
    else{
        n=a;
    }
    
        for(int i=1;i<=n;i++)
        {
            if(a%i==0 && b%i==0)
            {
                rem=i;
            }
        }
        cout<<rem;
    
    return 0;

}