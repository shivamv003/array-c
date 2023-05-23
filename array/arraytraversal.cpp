#include<iostream>
using namespace std;
int main()
{
    int n;
    int array1[] {1,2,3,4};
    n=sizeof(array1)/sizeof(array1[1]);
    for(int i=0;i<n;i++)
    {
        cout<<array1[i]<<" ";
    }
    return 0;
}