#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int k=1;k<=n-i;k++)
        {
            cout<<"  ";
        }
        for(int k=2;k<=n-i;k++)
        {
            cout<<"  ";
        }
        if(i==n)
        {
            for(int j=i-1;j>=1;j--)
            {
                cout<<j<<" ";
            }
        }
        else{
            for(int j=i;j>=1;j--)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
