#include<iostream>
using namespace std;
int main()
{
    int X=0,Y=0;
    char move;
    cout<<"enter the side you want to go from center(0,0) in upper case";
    cin>>move;
    switch(move)
    {
    case 'L':X--;
            break;
    case 'R':X++;
            break;
    case 'U':Y++;
            break;
    case 'D':Y--;
            break;
    default: cout<<"enter a valid move character:";
    }
    cout<<X<<" "<<Y;
    return 0;         

}