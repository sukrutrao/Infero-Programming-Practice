#include<bits/stdc++.h>
using namespace std;
int main()
{
	string inp;
	long long i,j,k,aodd=0,bodd=0,aeven=0,beven=0,resodd=0;
	long long *aea,*aoa,*bea,*boa;
	vector<int> mark;
	mark.clear();
	cin>>inp;
	aea=new long long[inp.size()];
	aoa=new long long[inp.size()];
	bea=new long long[inp.size()];
	boa=new long long[inp.size()];
	for(i=0;i<inp.size();i++)
	{
		aea[i]=aoa[i]=bea[i]=boa[i]=0;
	}
	for(i=inp.size()-1;i>=0;i--)
	{
		aea[i]=aeven;
		aoa[i]=aodd;
		bea[i]=beven;
		boa[i]=bodd;
		if(inp[i]=='a' && i%2==0)
		{
			
			aeven++;
		}
		else if(inp[i]=='a' && i%2==1)
		{
			aodd++;
		}
		else if(inp[i]=='b' && i%2==0)
		{
			beven++;
		}
		else if(inp[i]=='b' && i%2==1)
		{
			bodd++;
		}
	}
	resodd=((aeven*(aeven+1))+(aodd*(aodd+1))+(beven*(beven+1))+(bodd*(bodd+1)))/2;
	long long reseven=0;
	for(i=0;i<inp.size();i++)
	{
		if(i%2==0)
		{
			if(inp[i]=='a')
			{
				reseven+=aoa[i];
			}
			else
			{
				reseven+=boa[i];
			}
		}
		else
		{
			if(inp[i]=='a')
			{
				reseven+=aea[i];
			}
			else
			{
				reseven+=bea[i];
			}
		}
	}
	cout<<reseven<<" "<<resodd<<endl;
	return 0;
}
