#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void usc_bsc(long long a,long long b)
{
	long long d=a*b;
	while(a*b!=0) 
	{
		if(a>b) a=a%b;
		else b=b%a;
	}
	cout<<a+b<<" "<<d/(a+b)<<endl;
}
int main()
{
	long long a,b;
	while(1)
	{
		cin>>a>>b;
		if(a==b&&a==0) break; 
		usc_bsc(a,b);
	}
	
	return 0;
}