#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int t,n,k,*kids,i,j,diff=0;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		kids=new long long int[n];
		
		for(j=0;j<n;j++)
		{
			cin>>kids[j];
		}
		
		sort(kids,kids+n);	
		diff=kids[n-1]-kids[0];
		
		for(j=0;j<n-k+1;j++)
		{
			if(diff>(kids[j+k-1]-kids[j]))
			{
				diff=kids[j+k-1]-kids[j];
			//	cout<<"Hey "<<diff<<endl;
			}
		}
		cout<<diff<<endl;
	}
	return 0;
}
