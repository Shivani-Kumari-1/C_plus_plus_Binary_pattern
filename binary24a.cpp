/*

        1
      1 0
    1 0 1
  1 0 1 0
1 0 1 0 1

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
            if(j==2 || j==4)
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
