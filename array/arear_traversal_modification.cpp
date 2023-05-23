#include<iostream>
using namespace std;
int main()
{
    int array[]{1,2,3,4};
    for(int &x:array)
    x=x*2;
    for(int x:array)
    cout<<x<<" ";
    return 0;
}