#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double n1,n2,n3,m1,m2,m3,i,j,k,a,b,c,p,midax,miday,midbx,midby,midcx,midcy,slopa,slopb,slopc;
	long double sloppera,slopperb,slopperc,orthox,orthoy;
	long long dontcount;
	cin>>n1>>m1>>n2>>m2>>n3>>m3;
	if(((n1==n2) && (m1==m2)) || ((n3==n2) && (m3==m2)) || ((n1==n3) && (m1==m3)))
	{
		cout<<"Not Possible"<<endl;
		return 0;
	}
	else if((m2-m1)!=0 && (m3-m2)!=0 && (((long double)(m2-m1))/((long double)(n2-n1)))==(((long double)(m2-m3))/((long double)(n2-n3))))
	{
		cout<<"Not Possible"<<endl;
		return 0;
	}
	dontcount=1;
	midax=((long double)(n1+n2))/2.00;
	miday=((long double)(m1+m2))/2.00;
	midbx=((long double)(n3+n2))/2.00;
	midby=((long double)(m3+m2))/2.00;
	midcx=((long double)(n3+n1))/2.00;
	midcy=((long double)(m3+m1))/2.00;
	if((m1-m2)==0)
	{
		dontcount=1;
	}
	else
	{
		sloppera=((long double)(n1-n2))/((long double)(m2-m1));
	}
	if((m3-m2)==0)
	{
		dontcount=2;
	}
	else
	{
		slopperb=((long double)(n3-n2))/((long double)(m2-m3));
	}
	if((m1-m3)==0)
	{
		dontcount=3;
	}
	else
	{
		slopperc=((long double)(n1-n3))/((long double)(m3-m1));
	}
	if(dontcount==1)
	{
		orthox=((long double)(midcy-midby-slopperc*midcx+slopperb*midbx))/((long double)(slopperb-slopperc));
		orthoy=((long double)(slopperb*(orthox-midbx)+midby));
	}
	else if(dontcount==2)
	{
		orthox=((long double)(midcy-miday-slopperc*midcx+sloppera*midax))/((long double)(sloppera-slopperc));
		orthoy=((long double)(sloppera*(orthox-midax)+miday));
	}
	else
	{
		orthox=((long double)(miday-midby-sloppera*midax+slopperb*midbx))/((long double)(slopperb-sloppera));
		orthoy=((long double)(slopperb*(orthox-midbx)+midby));
	}
	
	long double circr;
	circr=((long double)(sqrt(pow((orthox-n1),2)+pow((orthoy-m1),2))));
	a=((long double)(sqrt(pow((n2-n1),2)+pow((m2-m1),2))));
	b=((long double)(sqrt(pow((n3-n2),2)+pow((m3-m2),2))));
	c=((long double)(sqrt(pow((n3-n1),2)+pow((m3-m1),2))));
	p=a+b+c;
	long double inx,iny;
	inx=((long double)(a*n3+b*n1+c*n2))/((long double)(p));
	iny=((long double)(a*m3+b*m1+c*m2))/((long double)(p));
	long double inr;
	if(dontcount==1)
	{
		if(slopperb!=0)
		{
			slopb=((long double)(-1/slopperb));
			inr=((long double)(slopb*inx-iny+m2-slopb*n2))/((long double)(sqrt(pow(slopb,2)+1)));
			
		}
		else if(slopperc!=0)
		{
			slopc=((long double)(-1/slopperc));
			inr=((long double)(slopc*inx-iny+m3-slopc*n3))/((long double)(sqrt(pow(slopc,2)+1)));
		}
	}
	else if(dontcount==2)
	{
		if(sloppera!=0)
		{
			slopa=((long double)(-1/sloppera));
			inr=((long double)(slopa*inx-iny+m1-slopa*n1))/((long double)(sqrt(pow(slopa,2)+1)));
			
		}
		else if(slopperc!=0)
		{
			slopc=((long double)(-1/slopperc));
			inr=((long double)(slopc*inx-iny+m3-slopc*n3))/((long double)(sqrt(pow(slopc,2)+1)));
		}
	}
	else
	{
		if(slopperb!=0)
		{
			slopb=((long double)(-1/slopperb));
			inr=((long double)(slopb*inx-iny+m2-slopb*n2))/((long double)(sqrt(pow(slopb,2)+1)));
			
		}
		else if(sloppera!=0)
		{
			slopa=((long double)(-1/sloppera));
			inr=((long double)(slopa*inx-iny+m1-slopa*n1))/((long double)(sqrt(pow(slopa,2)+1)));
		}
	}
	long double res=((long double)(M_PI*(pow(circr,2)-pow(inr,2))));
	cout<<fixed;
	//cout<<inr<<" "<<circr<<endl;
	cout<<setprecision(2)<<res<<endl;
	return 0;	
}
