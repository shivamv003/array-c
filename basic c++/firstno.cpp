#include<iostream>
using namespace std;

int firstno(int n)
{
    while(n>10)
    {
        n=n/10;

    }
    return n;

}
int main()
 {
    int n;
    cout<<"enter a no to get its first no back";
    cin>>n;
    cout<<firstno(n);
    return 0;
    
 }

 




