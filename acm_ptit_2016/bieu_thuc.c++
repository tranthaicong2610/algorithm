#include<iostream>
#include<algorithm>
using namespace std;
long long a[100005];
int main()
{
	long long sum=0;
	long long  n,k,m;
	cin>>n>>k;
	
	
	for(long  i=0;i<n;i++) cin>>a[i];
	
	sort(a+1,a+n);
	for(long i=0;i<=n-k-1;i++)
	{
		 if(i==0) sum+=a[0];
		 else sum-=a[i];
	}
	for(long i=n-k;i<n;i++)
	{
		 sum+=a[i];
	}
	
	cout<<sum;
	return 0;
	
}