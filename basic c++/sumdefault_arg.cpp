#include<iostream>
using namespace std;


    int sum(int a,int b,int c=0,int d=0)
    {
       return a+b+c+d;
    }
   
int main()
{
    cout<<sum(10,20,5);
    return 0;
}



