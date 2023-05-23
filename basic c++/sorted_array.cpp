#include<iostream>
using namespace std;
int main()
{
    int b,n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int s=sizeof(array)/sizeof(array[1]);
    for(int i=1;i<s;i++)
    {
        if(array[i]<array[i-1])
        {

            cout<<"not  sorted";
            return 0;
            
          /* b=array[i];
           array[i]=array[i-1];
           array[i-1]=b;*/
        }

    }

        cout<<"sorted";
    
    /*for(int x:array)
    {
       cout<<x<<" ";
    }*/
    
    return 0;
}