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
	long a[10005];
	for(long i=0;i<=10000;i++)
	{
		a[i]=0;
	}
	for(long i=2;i<=10000;i++)
	{
		if(a[i]==0) 
		{
			for(long j=i*2;j<=10000;j+=i) a[j]=1;
		}
	}
	long test;cin>>test;
	while(test--)
	{
		long n;cin>>n;
	for(long i=2;i<=n/2;i++)
	{
		if(a[i]==0&&a[n-i]==0) 
		{
			cout<<i<<" "<<n-i<<endl;
			break;
		}
	}
	}
	
	return 0;
}
