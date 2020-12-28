/*

1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1
1 0 1 0 1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j==2 || j==4)
                n=0;
            else
                n=31;
            cout<<" "<<n%2;
            n=n/2;
        }
        cout<<"\n";
    }
    return 0;
}
