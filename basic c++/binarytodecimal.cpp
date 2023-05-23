#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int lastno;
    int val=0;
   int base=1;


    while(n>0)
    {
        lastno=n%10;
        val=val+(lastno*base);
        base=base*2;
        n=n/10;

    }
    cout<<val;
    return 0;
}