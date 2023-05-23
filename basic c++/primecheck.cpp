#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1 or n==0)
    {
        cout<<"a composite no" ;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        else{
           // cout<<n;
           return true;
        }
        
       
        
    }
    return 0;
}