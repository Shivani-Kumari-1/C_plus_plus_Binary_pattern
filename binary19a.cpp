/*

        1
      1 1
    1 1 1
  1 1 1 1
1 1 1 1 1

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
            cout<<" "<<"1";
        }
        cout<<endl;
    }
    return 0;
}
