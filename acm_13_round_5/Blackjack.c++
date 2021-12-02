#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;


int main()
{
	long n,m;
	long a[m+1];
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	
	long sum=0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				long temp=a[i]+a[j]+a[k];
				if(temp>sum&&temp<=m) sum=temp;
				
			}
		}
	}
	cout<<sum;
	
	return 0;
}