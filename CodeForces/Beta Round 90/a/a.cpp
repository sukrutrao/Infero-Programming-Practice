#include<bits/stdc++.h>
using namespace std;
long long gcd(long long u,long long v)
{
    while(v!=0)
    {
        long long r=u%v;
        u=v;
        v=r;
    }
    return u;
}
int main()
{
	int a,b,n,i,j,k,turn=0,numtoplay;
	cin>>a>>b>>n;
	numtoplay=gcd(a,n);
	while(numtoplay<=n)
	{
		//cout<<"nu: "<<numtoplay<<endl;
		n-=numtoplay;
		if(turn==0)
		{
			numtoplay=gcd(b,n);
			turn=1;
		}
		else
		{
			numtoplay=gcd(a,n);
			turn=0;
		}
	}
	cout<<(turn+1)%2<<endl;
	return 0;
}

