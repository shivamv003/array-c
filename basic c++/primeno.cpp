#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1 or n==0)
    {
        cout<<"it is nor a prime nor a composite no";
        return 0;
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        cout<<"it is not a prime no";
        return 0;
        }
        
    }
        
    
    cout<<"it is a prime no"; 
    return 0;
}