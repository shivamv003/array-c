#include<iostream>
using namespace std;
int main()
{
    int n,array1[n],add=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array1[i];
    }
    for(int j=0;j<n;j++)
    {
        add=add+array1[j];
    }
    cout<<add;
    return 0;

}