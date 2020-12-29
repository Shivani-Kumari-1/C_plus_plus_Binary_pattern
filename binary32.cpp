/*

0
0 0
0 1 0
0 1 1 0
0 0 0 0 0

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==5 || j==1 || j==i)
            {
                cout<<" "<<"0";
            }
            else
            {
                cout<<" "<<"1";
            }
        }
        cout<<endl;
    }
    return 0;
}
