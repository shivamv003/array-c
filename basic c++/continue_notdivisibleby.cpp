#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        if((i%b)==0)
        continue;   //skipped the no that are divisible by b
        cout<<i<<" ";
    }
    return 0;
}