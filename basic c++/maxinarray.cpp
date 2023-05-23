#include<iostream>
using namespace std;

int max(int array1[],int n)
{
    int ans=array1[0];
    for(int i=0;i<n;i++)
    {
        if(array1[i]>ans)
        {
            ans=array1[i];
        }
        
    }
    return ans;
}



int main()
{
    int n,array1[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array1[i];
    }

    int ans=max(array1,n);
    cout<<ans;

return 0;
}