#include<iostream>
using namespace std;
long long d=1000000007;
int main()
{
	long long f0=0,f1=1;
	 long n,i=1 ;
	cin>>n;
	while(i<=n)
	{
		long long temp=f1;
		f1=f1+f0;
		f1=f1%d;
		f0=temp%d;
		i++;
	}
	cout<<f0;
	return 0;
}