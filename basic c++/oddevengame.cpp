#include<iostream>
using namespace std;
int main()
{

    int X,Y,P ;
    cin>>X>>Y>>P;
        if (P % 2!=0) // when P is odd
            return max(2 * X, Y) / min(2 * X, Y);
        else // even
            return max(X, 2*Y) / min(X, 2*Y);
    
    return 0;
}
    
