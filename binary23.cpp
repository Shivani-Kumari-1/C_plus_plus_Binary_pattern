/*

0
0 1
0 1 0
0 1 0 1
0 1 0 1 0

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==2 || j==4)
            {
                cout<<" "<<"1";
            }
            else
            {
                cout<<" "<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}
