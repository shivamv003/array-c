#include<iostream>
using namespace std;
int main()
{
    int n,div;
    cout<<"enter a no";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            break;

        }
        

    }
    //cout<<div;
    return 0;

}

