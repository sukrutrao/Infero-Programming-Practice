#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,i,j,k,x,y,numleft,numusedrows=0,numusedcolumns=0;
	cin>>n>>m;
	long long *usedrows=new long long[n];
	long long *usedcolumns=new long long[n];
	numleft=n*n;
	for(i=0;i<n;i++)
	{
		usedrows[i]=usedcolumns[i]=0;
	}
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		if(usedrows[x-1]==0 && usedcolumns[y-1]==0)
		{
			
			numleft-=(n-numusedrows+n-numusedcolumns-1);
			numusedrows++;
			numusedcolumns++;
			
			
		}
		else if(usedrows[x-1]==1 && usedcolumns[y-1]==0)
		{
			
			numleft-=(n-numusedrows);
			numusedcolumns++;
			
		}
		else if(usedcolumns[y-1]==1 && usedrows[x-1]==0)
		{
			
			numleft-=(n-numusedcolumns);
			numusedrows++;
			
		}
		cout<<numleft<<" ";
		usedrows[x-1]=1;
		usedcolumns[y-1]=1;
	}
	cout<<endl;
	return 0;
}
