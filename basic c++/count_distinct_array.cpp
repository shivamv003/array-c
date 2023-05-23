#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int j=1;j<=n;j++)
    {
        // if(array[j-1]!=array[j])
        // {
        //     count++;
        // }
        for(int i=1;i<=j;i++)
        {
            if(array[i-1]!=array[j])
           {
               
               
               break;
           }
           
            

        }
    }
    cout<<count;
    return 0;
}