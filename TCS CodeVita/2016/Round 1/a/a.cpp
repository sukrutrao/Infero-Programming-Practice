#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k;
	cin>>n;
	if(n<=1)
	{
		cout<<"You cannot generate christmas tree"<<endl;
	}
	else if(n>20)
	{
		cout<<"Tree is no more"<<endl;
	}
	else
	{
		for(i=0;i<=n;i++)
		{
			for(j=0;j<n-i;j++)
			{
				cout<<"  ";	
			}
			for(j=0;j<(2*i+1);j++)
			{
				cout<<"* ";
			}
			cout<<endl;
			
		}
		for(i=1;i<n-1;i++)
		{
			for(j=0;j<(n-i);j++)
			{
				for(k=0;k<(n-j-1);k++)
				{
					cout<<"  ";
				}
				for(k=0;k<(2*j+3);k++)
				{
					cout<<"* ";
				}
				cout<<endl;
			}
			
		}
		for(i=0;i<2;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<"  ";
			}
			cout<<"* "<<endl;
		}
	}
	return 0;
}
