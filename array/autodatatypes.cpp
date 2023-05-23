#include<typeinfo>
#include<iostream>
using namespace std;
int main()
{
    auto a=10;
    auto b=19.5;  //treated as double
    auto c="wow";
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name()<<"\n";
    cout<<typeid(c).name()<<"\n";
    return 0;

}