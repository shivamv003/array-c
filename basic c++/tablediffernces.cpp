#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=10;i++)
    {
        cout<<(a*i)-(b*i)<<" ";
    }
    return 0;
}