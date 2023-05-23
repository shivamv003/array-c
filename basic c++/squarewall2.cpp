#include<iostream>
using namespace std;
int main()
{
int n,c;
c=n;
cin>>n;
while(n>=1)
{
    for(int i=1;i<=c;i++)
  {
    cout<<"*";
  }
n--;
cout<<"\n";
}

return 0;
}
