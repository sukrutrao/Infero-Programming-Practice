#include<iostream>
#include<string>
using namespace std;
int main()
{
	string iden;
	while(cin>>iden)
	{
		int type=0;
		if(iden[0]>122 || iden[0]<97)
		{
			
			cout<<"Error!"<<endl;
		}
		else
		{
			int flag=0,flag2=0;
			for(int i=1;i<iden.size()-1;)
			{
				//cout<<"Hi "<<iden<<" "<<i<<" "<<iden[i]<<endl;
				if(iden[i]=='_' && (type==0||type==1))
				{
					type=1;
					//cout<<"Hey "<<iden<<" "<<i<<" "<<iden[i]<<endl;
					if(iden[i+1]>=97 && iden[i+1]<=122)
					{
						//cout<<"Hello! "<<iden.substr(i+1)<<endl;
						iden[i+1]-=32;
						//cout<<"Hello! "<<iden.substr(i+1)<<endl;
						iden=iden.substr(0,i)+iden.substr(i+1);
					    //cout<<"Hello! "<<iden.substr(i+1)<<" "<<iden<<" "<<i<<endl;
						
						i++;
						if(i==iden.size())
						{
							flag2=1;
						}
						//cout<<"Flag "<<flag2<<" "<<i<<endl;
					}
					else
					{
						cout<<"Error!"<<endl;
						flag=1;
						break;
					}
					
					
				}
				else if(iden[i]=='_' && type==2)
				{
					cout<<"Error!"<<endl;
					flag=1;
					break;
				}
				else if(iden[i]>=65 && iden[i]<=90 && (type==0 ||type==2))
				{
					type=2;
					iden[i]+=32;
					iden=iden.substr(0,i)+"_"+iden.substr(i);
					i+=2;
				}
				else if(iden[i]>=65 && iden[i]<=90 && type==1)
				{
					cout<<"Error!"<<endl;
					flag=1;
					break;
				}
				else if(iden[i]<97 || iden[i]>122)
				{
					cout<<"Error!"<<endl;
					flag=1;
					break;
				}
				else
				{
					i++;
				}
			}
			if(iden[iden.size()-1]>=65 && iden[iden.size()-1]<=90 && (type==2||type==0))
			{
				iden=iden.substr(0,iden.size()-1)+"_"+iden.substr(iden.size()-1);
				iden[iden.size()-1]+=32;
			}
			else if(iden[iden.size()-1]>=65 && iden[iden.size()-1]<=90 && type==1 && flag2==1)
			{}
			else if(iden[iden.size()-1]>=65 && iden[iden.size()-1]<=90 && type==1 && flag2==0 && flag==0)
			{
				cout<<"Error!"<<endl;
				flag=1;
			}
			else if(iden[iden.size()-1]=='_' && flag==0)
			{
				cout<<"Error!"<<endl;
				flag=1;
			}
			else if((iden[iden.size()-1]<97 || iden[iden.size()-1]>122) && flag==0)
			{
				cout<<"Error!"<<endl;
				flag=1;
			}
			if(flag==0)
			{
				cout<<iden<<endl;
				
			}
		}
	}
	return 0;
}
