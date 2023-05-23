#include<iostream>
using namespace std;

int cube(int s)
{
    return (s*s*s);
}

int rectangle(int l, int b,int h)
{
    return (l*b*h);
}

int main()
{
  cout<<"enter dimension of the cube";
  int s;
  cin>>s;
  cout<<"enter dimension of rectangle";
  int l,b,h;
  cin>>l>>b>>h;
  cube(s);
  rectangle(l,b,h);
  cout<<cube(s)<<"\n";
  cout<<rectangle( l,b,h);
  return 0;
}