#include<bits/stdc++.h>
using namespace std;
string compressstr(string s)
{
	long long i;
	i=0;
	while(i<s.size()-1)
	{
		if(s[i]==s[i+1])
		{
			while(i<s.size()-1 && s[i]==s[i+1])
			{
				if(i!=s.size()-2)
					s=s.substr(0,i+1)+s.substr(i+2);
				else
					s=s.substr(0,i+1);
			}
			i++;
		}
		else
		{
			i++;
		}
	}
	return s;
}
int checkpal(string s)
{
	long long i;
	for(i=0;i<(s.size()/2);i++)
	{
		if(s[i]!=s[s.size()-1-i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	string inp,sub,temp;
	long long i,j,k,oddc=0,evenc=0;
	cin>>inp;
	for(i=1;i<=inp.size();i++)
	{
		for(j=0;j<=inp.size()-i;j++)
		{
			sub=inp.substr(j,i);
			temp=compressstr(sub);
			k=checkpal(temp);
			if(k==1 && sub.size()%2==0)
			{
			//	cout<<"es: "<<sub<<endl;
				evenc++;
			}
			else if(k==1 && sub.size()%2==1)
			{
			//	cout<<"os: "<<sub<<endl;
				oddc++;
			}
		}
	}
	cout<<evenc<<" "<<oddc<<endl;
	return 0;
}
