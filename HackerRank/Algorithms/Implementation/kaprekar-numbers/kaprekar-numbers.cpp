#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	long long int p,q,i,j,k,l,flag=0;
	cin>>p>>q;
	for(i=p;i<=q;i++)
	{
		j=pow(i,2);
		k=j%(long long int)pow(10,(int)(to_string(i).size()));
		l=j/(long long int)pow(10,(int)(to_string(i).size()));
		if((k+l)==i)
		{
			cout<<i<<" ";
			flag=1;
		}
	}
	
	if(flag==0)
	{
		cout<<"INVALID RANGE";
	}
	cout<<endl;
	return 0;
}
