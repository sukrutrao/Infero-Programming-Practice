#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
	string inp;
	int stat=0,lastprime;
	int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int yesc=0,counter=0;
	while(true)
	{
		cout<<arr[counter]<<endl;
		
		fflush(stdout);
		counter++;
		cin>>inp;
		if(inp=="yes")
		{
			yesc++;
			lastprime=arr[counter-1];
		}
		if(yesc==2)
		{
			cout<<"composite"<<endl;
			fflush(stdout);
			break;
		}
		if(counter==15)
		{
			break;
		}
	}
	if(yesc==1 && lastprime<=7)
	{
		int temp=pow(lastprime,2);
		
		cout<<temp<<endl;
		fflush(stdout);
		cin>>inp;
		if(inp=="yes")
		{
			cout<<"composite"<<endl;
			fflush(stdout);
		}
		else
		{
			cout<<"prime"<<endl;
			fflush(stdout);
		}
	}
	else if(yesc==1)
	{
		cout<<"prime"<<endl;
		fflush(stdout);
	}
	else if(yesc==0)
	{
		cout<<"prime"<<endl;
		fflush(stdout);
	}
	return 0;
}
