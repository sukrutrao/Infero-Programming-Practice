#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,i,j,k,temp;
	cin>>n>>m;
	long long *per=new long long[n];
	long long *fp=new long long[m];
	long long *sp=new long long[m];
	for(i=0;i<n;i++)
	{
		cin>>per[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>fp[i]>>sp[i];
	}
	int flag=0;
	while(flag==0)
	{
		flag=1;
		for(i=0;i<m;i++)
		{
			if(per[fp[i]-1]<per[sp[i]-1])
			{
				flag=0;
				temp=per[fp[i]-1];
				per[fp[i]-1]=per[sp[i]-1];
				per[sp[i]-1]=temp;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<per[i]<<" ";
	}
	return 0;
}
