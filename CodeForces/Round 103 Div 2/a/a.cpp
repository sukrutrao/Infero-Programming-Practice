#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,minval=101,maxval=-1,val,minpos,maxpos;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		if(val<=minval)
		{
			minval=val;
			minpos=i;
		}
		if(val>maxval)
		{
			maxval=val;
			maxpos=i;
		}		
	}
	int res=0;
	res+=maxpos;
	res+=(n-minpos-1);
	if(maxpos>minpos)
	{
		res--;
	}
	cout<<res<<endl;
	return 0;	
}
