#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int n,i,j,k,l,sum=0;
	cin>>n;
	vector<long long int> arr(n);
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	//cout<<"S: "<<sum<<endl;
	if(sum%2==0)
	{
		j=sum/2;
		cout<<j<<endl;
	}
	else
	{
		j=(sum/2)+1;
		cout<<j<<endl;
	}
	return 0;
	
}
