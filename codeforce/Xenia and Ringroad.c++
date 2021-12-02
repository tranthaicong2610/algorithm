#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


 
int main()
{
	long n,m;
	cin>>n>>m;
	long long sum=0;
	long a[m+1];
	for(long i=0;i<m;i++)
	{
		cin>>a[i];
		
	}
	sum=a[0]-1;
	for(long i=1;i<m;i++)
	{
		if(a[i]>=a[i-1])
		{
			sum+=a[i]-a[i-1];
		}
		else 
		{
			sum+=(n+a[i]-a[i-1]);
		}
	}
	cout<<sum;
	return 0;
}
   