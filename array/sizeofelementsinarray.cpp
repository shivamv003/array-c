#include<iostream>
using namespace std;
int main()
{
    int n;
    int array1[]{1,2,3,4,5};
    n=sizeof(array1)/sizeof(array1[1]);
    cout<<sizeof(array1)/n;
    return 0;
}