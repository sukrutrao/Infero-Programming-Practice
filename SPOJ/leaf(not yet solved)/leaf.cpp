#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	long long int t,a,i;
	cin>>t;
	const double hpi=(double)acos(0);
	for(i=0;i<t;i++)
	{
		cin>>a;
		cout<<fixed;
		cout<<setprecision(20)<<(double)(pow(a,2))*(hpi-1)<<endl;
		
	}
	cout<<M_PI_2<<endl;
	cout<<hpi<<endl;
	return 0;
}
