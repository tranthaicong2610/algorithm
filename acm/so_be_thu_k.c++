#include<iostream>
#include<algorithm>
using namespace std;
long long a[100005];
int main()
{
	long n,k;
	cin>>n>>k;
	for(long i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	sort(a,a+n);
	
	cout<<a[k];
	return 0;
	
}