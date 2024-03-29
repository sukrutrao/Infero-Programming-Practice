#include<iostream>
#include<cmath>
using namespace std;
long isprime(long &val)
{
	for(long i=2;i<=sqrt(val);i++)
	{
		if(val%i==0)
			return 0;
	}
	return 1;
}
void conv_bin(long val,long arr[], long &size)
{
	for(long i=size-1;i>=0;i--)
	{
		arr[i]=val%2;
		val/=2;
	}
}
long conv_base(long arr[], long &size, long &base)
{
	long sum=0;
	for(long i=size-1;i>=0;i--)
	{
		sum+=pow(base,size-i-1)*arr[i];
	}
	return sum;
}
long find_div(long &val)
{
	for(long i=2;i<sqrt(val);i++)
	{
		if(val%i==0)
			return i;
	}
}
int check_one(long arr[],long size)
{
	int ctr=0;
	for(int i=0;i<size;i++)
	{
		if((i+size)%2==0 && arr[i]==1)
		{
			return 0;
		}
		else if(arr[i]==1)
		{
			ctr++;
		}
	}
	if(ctr==2)
	{
		return 1;
	}
	return 0;
}
int main()
{
	long t,n,j,counter=0;
	long *arr;
	long hold[9];
	cin>>t>>j>>n;
	arr=new long[j];
	cout<<"Case #1:"<<endl;
	for(long k=pow(2,j-1)+1;k<=pow(2,j)-1 && counter<n;k+=2)
	{
		long flag=0;
		cout<<k<<" "<<isprime(k)<<endl;
		if(isprime(k)==1)
		{
			continue;
		}
		if(check_one(arr,j)==0)
		{
			continue;
		}
		conv_bin(k,arr,j);
 		for(long c=2;c<=6;c+=2)
		{
			long sum=conv_base(arr,j,c);
			cout<<sum<<endl;
			if(isprime(sum)==1)
			{
				
				flag=1;	
				break;
			}
			hold[c-2]=find_div(sum);
		}
		if(flag==1)
		{
			continue;
		}		
		for(long i=0;i<j;i++)
		{
			cout<<arr[i];
		}		
		cout<<" ";
		for(long i=0;i<9;i++)
		{
			if(i%2==1)
			{
				cout<<"2"<<" ";
			}
			else
			{	
				cout<<hold[i]<<" ";
			}	
		}	
		cout<<endl;
		counter++; 
	}
    		
	return 0;
}
