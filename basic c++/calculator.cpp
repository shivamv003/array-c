#include<iostream>
using namespace std;
int main()
{
    char oper;
    int x,y;
    cout<<"enter code to perform the calculation(A,M,S)";
    cin>>oper;
    cout<<"enter the two numbers";
    cin>>x>>y;
     switch(oper)
    {
    case '1':cout<<"addition is "<<x+y;
            break;
    case 'M':cout<<"multiplication is "<<x*y;
            break;
    case 'S':cout<<"subtraction  is "<<x-y;
            break;
    default : cout<<"enter a correct operator";
    }
    
    return 0;
}
