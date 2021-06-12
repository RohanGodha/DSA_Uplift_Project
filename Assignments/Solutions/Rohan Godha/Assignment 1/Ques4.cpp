#include <iostream>
using namespace std;
int main() 
{
for(int i=1;i<=3;i++)
{
	for(int j=3-i;j>0;j--)
	{
		cout<<" ";
	}
	for(int k=i;k>0;k--)
	{
		cout<<"* ";
	}
	cout<<endl;
}

for(int i=2;i>0;i--)
{
	    for(int j=0;j<3-i;j++)
	{
		cout<<" ";
	}
	for(int k=0;k<i;k++)
	{
		cout<<"* ";
	}
	cout<<endl;
}
    return 0;
}
