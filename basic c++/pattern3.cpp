#include<iostream>
using namespace std;
int main()
{
  int n,a=1;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int k=i;
    //cout<<k;
   
    for(int k=i;k<n;k++)
    {
      cout<<" ";
    }
    for(int a=1;a<=k;a++)
    {
      cout<<"*";
      

    }
   
    cout<<"\n";

  }
  return 0;
}