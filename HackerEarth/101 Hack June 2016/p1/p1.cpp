#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,x,y,x0,y0,flagx=0,flagy=0;
	cin>>n;
	cin>>x>>y;
	x0=x;
	y0=y;
	while(n>1)
	{
		cin>>x>>y;
		if(flagx==0 && x0==x)
		{
			flagx=0;
			
		}
		else
		{
			flagx=1;
		}
		if(flagy==0 && y0==y)
		{
			flagy=0;
		}
		else
		{
			flagy=1;
		}
		n--;
	}
	if(flagx==0 || flagy==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
