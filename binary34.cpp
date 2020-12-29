/*

0
1 0
1 0 1
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
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==1 || i==2 || i==5)
            {
                cout<<" "<<(i+j)%2;
            }
            else if(i==3)
            {
                cout<<" "<<((2*i)-j)%2;
            }
            else
            {
                cout<<" "<<((i-1)+j)%2;
            }
        }
        cout<<endl;
    }
    return 0;
}
