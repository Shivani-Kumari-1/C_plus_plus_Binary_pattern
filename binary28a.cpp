/*

        0
      0 0
    1 1 1
  0 0 1 0
0 0 1 0 0

*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter Number = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" "<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if(i==3 || j==3)
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
