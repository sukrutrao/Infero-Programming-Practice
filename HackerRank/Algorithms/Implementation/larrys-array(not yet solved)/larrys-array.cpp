#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void swap(long long int &a, long long int &b)
{
	b=a+b;
	a=b-a;
	b=b-a;
}
int main()
{
	long long int t,n,i,j,k,l;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		vector<long long int> arr(n);
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		} 
		int flag=0;
		for(k=0;k<pow(n,3);k++)
		{
		for(j=0;j<n-2;j++)
		{
			if(arr[j]<arr[j+1] && arr[j+1]<arr[j+2])
			{
				
			}
			else if(arr[j+1]<arr[j+2] && arr[j+2]<arr[j])
			{
				swap(arr[j],arr[j+2]);
				swap(arr[j],arr[j+1]);
			}
			else if(arr[j+2]<arr[j] && arr[j]<arr[j+1])
			{
				swap(arr[j],arr[j+2]);
				swap(arr[j+1],arr[j+2]);
			}
			else
			{
				flag=1;
				break;
			}
		}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
