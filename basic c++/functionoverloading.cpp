#include<iostream>
using namespace std;

/* a function =overloading can have same name with diffrernt parameters but it
cant just have all same thing with a different return type  because if we print a char 
it can be converted into a int with its ASCI value

 function(int a)
{

}

int main
function(b)  it will print its ASCII value 
*/

int operations(int a,int b)
{
    if(a>b)
    cout<<a<<" is greater"<<"\n";
    else
    cout<<b<<" is greater"<<"\n";
}
int operations(int a,int b,int c)
{
    if(a>b && a>c)
    cout<<a<<" is greater"<<"\n";
    else if(b>c && b>a)
    cout<<b<< " is greater"<<"\n";
    else
    cout<<c <<" is greater"<<"\n";
}

int main()
{
    cout<<"function overloading is used"<<"\n";
    operations(10,50);
    operations(50,70,80);
    return 0;
}