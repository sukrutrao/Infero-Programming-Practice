#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,res="";
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		res+=to_string(abs(a[i]-b[i]));
	}
	cout<<res<<endl;
	return 0;
}
