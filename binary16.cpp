/*

0 1 1 1 0
1 0 1 0 1
1 1 0 1 1
1 0 1 0 1
0 1 1 1 0

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        if(i==1 || i==5)
                n=14;
                else if(i==3)
                    n=27;
                else
                n=21;
        for(j=1;j<=5;j++)
        {
            cout<<" "<<n%2;
            n=n/2;
        }
        cout<<"\n";
    }
    return 0;
}
