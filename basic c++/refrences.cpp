#include<iostream>
using namespace std;
int main()
{
    int a,b=20;
    a=10;
   int &c=a;
    c=b+a;
    cout<<a;  //30
    return 0;
}