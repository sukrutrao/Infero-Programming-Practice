#include<bits/stdc++.h>
using namespace std;
string convhex(char ch)
{
	int val=ch,temp;
	string res="";
	char tempch;
	while(val>0)
	{
		temp=val%16;
		if(temp<=9)
		{
			tempch=temp+48;
		}
		else
		{
			tempch=temp+55;
		}
		res=tempch+res;
		val/=16;
		
	}
	return res;
}
long long convchar(string str)
{
	long long val=0,intval;
	for(unsigned long long i=str.size()-1;(i+1)>0;i--)
	{
		if(str[i]>='A')
			intval=str[i]-55;
		else
			intval=str[i]-48;
		val+=(pow(16,str.size()-1-i)*intval);
	}
	return val;
}
int main()
{
	string typ,dummy;
	string inp,id,res="",hexa;
	stringstream sst;
	unsigned long long i;
	getline(cin,typ);
	if(typ=="E")
	{
		
		getline(cin,inp);
	//	cout<<"i: "<<inp<<endl;
		cin>>id;
	//	cout<<"id: "<<id<<endl;
		sst<<id.size();
		res+=sst.str();
		res+='-';
		res+=id;
	//	cout<<"r: "<<res<<endl;
		for(i=0;i<inp.size();i++)
		{
			hexa=convhex(inp[i]);
			reverse(hexa.begin(),hexa.end());
			res+='-';
			res+=hexa;
		}
		cout<<res<<endl;
	}
	else if(typ=="D")
	{
		getline(cin,inp);
		string hold="";
		long long dashcount=0;
		for(i=0;i<inp.size();i++)
		{
			if(inp[i]!='-')
			{
				hold+=inp[i];
			}
			else
			{
				
				if(dashcount==1)
				{
					cout<<hold<<endl;
				}
				else if(dashcount>1)
				{
					reverse(hold.begin(),hold.end());
				//	cout<<"h: "<<hold<<endl;
					long long ans=convchar(hold);
					char charac=ans;
					cout<<charac;
				}
				hold="";
				dashcount++;
			}
			
			
		}
		reverse(hold.begin(),hold.end());
		//	cout<<"h: "<<hold<<endl;
		long long ans=convchar(hold);
		char charac=ans;
		cout<<charac;
		cout<<endl;
	}
	return 0;
}
