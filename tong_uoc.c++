#include<iostream>
#include<cmath>
using namespace std;
long long result(long long n)
{
	if(n==1) return 1;
	else 
	{
		long long sum=0;
		for(long i=1;i<(sqrt)(n);i++)
		{
			if(n%i==0) {
				sum+=n/i;
				sum+=i;
			}
			
		}
		if((sqrt)(n)==(int)(sqrt)(n)) sum+=(sqrt)(n);
		return sum;
	}
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long n;cin>>n;
		cout<<result(n)<<endl;
	}
	return 0;
}