/*

        1
      0 1
    0 1 0
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
    for(i=0;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" "<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==2 || i==5)
            {
                cout<<" "<<((i+1)+j)%2;
            }
            else
            {
                cout<<" "<<((i+2)+j)%2;
            }
        }
        cout<<endl;
    }
    return 0;
}
