#include<iostream>
using namespace std;

int fibo(int n)
{
    int a=0;
    int b=1;
    int sum=0;
    
    for(int i=1;i<n;i++)
    {
        sum=a+b;
        //cout<<sum<<" ";
        a=b;
        b=sum;
        
    }
    cout<<"    "<<sum;
    return 0;

}

int main()
{
    
    int n;
    cin>>n;
    fibo(n);
    return 0;
}