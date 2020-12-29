/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

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
            if((i+j)%2 != 0)
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
