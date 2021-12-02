#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long n,k;
long long a[200005];
void result()
{
	sort(a,a+n);
	
	if(k==0) 
	{
		if(a[0]==1) cout<<-1;
		else cout<<1;
	}
	else if(k==n) cout<<a[k-1];
	else if(a[k]==a[k-1]) cout<<-1;
	else 
	{
		cout<<a[k-1];
	}
	
}
int main()
{
	cin>>n>>k;
	for(long i=0;i<n;i++)
	{
		cin>>a[i];
	}
	result();
	return 0;
}