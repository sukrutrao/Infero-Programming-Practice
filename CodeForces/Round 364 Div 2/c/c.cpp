#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,j,k,starti=0,endi=-1,numletters,arr[123]={0},numdist=0,isletter[123]={0},flag=0;
	string str;
	cin>>n;
	cin>>str;
	numletters=n+1;
	for(i=0;i<n;i++)
	{
		if(isletter[str[i]]==0)
		{
			isletter[str[i]]=1;
			numdist++;
		}
	}
//	cout<<"nd: "<<numdist<<endl;
	long long numcount=0;
	while(true)
	{
		if(numcount<numdist)
		{	
			endi++;
			if(endi==n)
			{
				break;
			}
			if(arr[str[endi]]==0)
			{
				
				numcount++;
			}
			arr[str[endi]]++;
			continue;
		}
	//	cout<<"nc: "<<numcount<<endl;
	//	cout<<arr[97]<<endl;
	//	cout<<arr[98]<<endl;
	//	cout<<arr[99]<<endl;
		while(arr[str[starti]]>1)
		{	
			arr[str[starti]]--;
			starti++;
		}	
		if((endi-starti+1)<numletters || flag==0)
		{
			numletters=endi-starti+1;
		//	cout<<"nl: "<<numletters<<endl;
			flag=1;
		}	
		numcount--;
		
		arr[str[starti]]--;
		starti++;
		
		
	}
	cout<<numletters<<endl;
	return 0;
}
