//did noy cleat two test cases (#9,#10) due to timeout
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int t,n,k,i,j,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
    	cin>>n>>k;
    	vector<long long int> arr(n);
    	vector<long long int> stat(n);
    	for(j=0;j<n;j++)
    	{
    		arr[j]=0;
    		stat[j]=0;
    	}
    	int flag=0;
    	long long int count=0;
    	//cout<<"n: "<<n<<" k: "<<k<<endl;
    	for(l=1;l<=n;l++)
    	{
    		int flag2=0;
    		for(j=1;j<=n;j++)
    		{
    			if((j+k)<=n && (j+k)>=1 &&(abs(j-k)>n || abs(j-k)<1) && stat[j-1]==0)
    			{
    				flag2=1;
    				if(arr[j+k-1]==0)
    				{
    					arr[j+k-1]=j;
    					stat[j-1]=1;
    					count++;
    				}	
    				else
    				{
    					flag=1;
    					break;
    				}
    			}
    			else if(abs(j-k)<=n && abs(j-k)>=1 &&((j+k)>n || (j+k)<1) && stat[j-1]==0)
    			{
    				flag2=1;
    				if(arr[abs(j-k)-1]==0)
    				{
    				
    					arr[abs(j-k)-1]=j;
    					stat[j-1]=1;
    					count++;
    					
    				}
    				else
    				{
    					flag=1;
    					break;
    				}
    			}
    			else if(((j+k)>n || (j+k)<1) &&(abs(j-k)>n || abs(j-k)<1) && stat[j-1]==0)
    			{
    				flag=1;
    				break;
    			}
    			else
    			{
    				if(arr[j+k-1]==0 && arr[abs(j-k)-1]!=0 && stat[j-1]==0)
    				{
    					flag2=1;
    					arr[j+k-1]=j;
    					stat[j-1]=1;
    					count++;
	    			}
	    			
	    			else if(arr[j+k-1]!=0 && arr[abs(j-k)-1]==0 && stat[j-1]==0)
	    			{
	    				flag2=1;
	    				arr[abs(j-k)-1]=j;
	    				stat[j-1]=1;
	    				count++;
    				}
    					
    				else if(arr[j+k-1]!=0 && arr[abs(j-k)-1]!=0 && stat[j-1]==0)
    				{
    					flag=1;
    					break;
    				}
    				
    			}
    		}
    		
    		if(flag==1)
    		{
    			cout<<"-1"<<endl;
    			break;
    		}
			if(count==n)
			{
				for(j=0;j<n;j++)
				{
					cout<<arr[j]<<" ";
				}
				cout<<endl;
				break;
			} 
			if(flag2==0)
    		{
    			break;
    		}   	
    	}
    	if(count!=n && flag==0)
    	{
    		for(j=1;j<=n && count<n;j++)
    		{
    			if(stat[j-1]==0 && arr[j+k-1]==0 && arr[abs(j-k)-1]==0)
    			{
					arr[min(j+k,abs(j-k))-1]=j;
					stat[j-1]=1;
					count++;    				
    			}
    			else if(stat[j-1]==0 && arr[j+k-1]!=0 && arr[abs(j-k)-1]==0)
    			{
    				arr[abs(j-k)-1]=j;
    				stat[j-1]=1;
    				count++;
    			}
    			else if(stat[j-1]==0 && arr[j+k-1]==0 && arr[abs(j-k)-1]!=0)
    			{
    				arr[j+k-1]=j;
    				stat[j-1]=1;
    				count++;
    			}
    			else if(stat[j-1]==0)
    			{
    				flag=1;
    				break;
    			}
    		}
    		if(flag==1)
    		{
    			cout<<"-1"<<endl;
    		}
    		else
    		{
    			for(j=0;j<n;j++)
    			{
    				cout<<arr[j]<<" ";
    			}
    			cout<<endl;
    		}
    	}
    }
       
    return 0;
}

