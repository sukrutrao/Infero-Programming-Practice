#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,a;
	cin>>n>>m;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<0)
		{
			arr.push_back(a);
		}
	}
	sort(arr.begin(),arr.end());
	int res=0;
	for(int i=0;i<m && i<arr.size();i++)
	{
		res-=arr[i];
	}
	cout<<res<<endl;
	return 0;
}
