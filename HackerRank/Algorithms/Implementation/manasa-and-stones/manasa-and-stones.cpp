#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int t,n,a,b,i,j,k,l,sum=0;

	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>a>>b;
		if(a>b)
		{
			b=a+b;
			a=b-a;
			b=b-a;
		}
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<j;k++)
			{
				sum+=b;
			}
			for(k=0;k<n-j-1;k++)
			{
				sum+=a;
			}
			cout<<sum<<" ";
			if(a==b)
			{
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
