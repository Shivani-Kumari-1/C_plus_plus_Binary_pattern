/*

1 1 1 1 1
0 0 0 0 0
1 1 1 1 1
0 0 0 0 0
1 1 1 1 1

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=1;i<=5;i++)
    {
        if(i==1 || i==3 || i==5)
            n=31;
        else
            n=0;
        for(j=1;j<=5;j++)
        {
            cout<<" "<<n%2;
        }
        cout<<"\n";
    }
    return 0;
}
