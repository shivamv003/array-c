#include<iostream>
using namespace std;
int main()
{
    int n;
    int k=1;
    int a=1;
    cin>>n;
    while(a<=n)
    {
        while(a<n)
        {
            cout<<" ";
            a++;
        }
        while(k<=a)
        {
            cout<<"*";
            k++;
        }
        cout<<"/n";
        a++;
    }
    return 0;
}
