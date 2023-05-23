#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year to check leap year or not";
    cin>>year;
   /* if(year%4==0 && year%400)
    
        cout<<year<<" is a leap year ";
    
    else
    
        cout<<"is not a leap year";*/

    if( year%400==0)
    {
        cout<<"it is a leap year";
    }
    else if(year%4==0 and year%100!=0)
    {
        cout<<"it is aleap year";
    }
    else{
        cout<<"it is nat a leap year";
    }
    
 return 0;
}