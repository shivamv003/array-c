//WAP a program to print entered no as a positive odd or positive even or zero.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n>0)
    {
    cout<<"positive";
        if(n%2==0)
            cout<<" even";
        else
            cout<<" odd";
    }
        
     else if(n<0)
     {
       cout<<"negative";
        if(n%2==0)
            cout<<" even";
        else
            cout<<" odd";
     }
       
    else
        cout<<"zero";
        return 0;

}
