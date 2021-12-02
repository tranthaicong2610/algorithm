#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool tong(long n)
{
	long sum=1;
	for(long i=2;i<=(sqrt)(n);i++) 
		if(n%i==0)
		{
			sum+=i;
			sum+=(n/i);
		}
		int m=(sqrt)(n);
	if(m==(n/m)&&n%m==0) sum-=m;
	if(sum>n) return true;
	return false;
}
int main()
{
	long l,r,count=0;
	cin>>l>>r;
	for(long i=l;i<=r;i++)
	{
		if(tong(i))  count++;
	}
	cout<<count;
	
	
	return 0;
	
}