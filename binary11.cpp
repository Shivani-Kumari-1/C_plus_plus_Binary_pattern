/*

1 1 0 1 1
1 1 0 1 1
0 0 0 0 0
1 1 0 1 1
1 1 0 1 1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        if(i==3)
                n=0;
            else
                n=27;
        for(j=1;j<=5;j++)
        {
            cout<<" "<<n%2;
            n=n/2;
        }
        cout<<"\n";
    }
    return 0;
}
