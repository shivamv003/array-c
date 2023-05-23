#include<iostream>
using namespace std;
int main()
{
    int a,b;      //a for table no.   and b for upto we want the table for that no
    int mult;
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        mult=a*i;
        cout<<mult<<"\n";
        

    }
    return 0;
}