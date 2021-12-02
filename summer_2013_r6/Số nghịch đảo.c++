#include<iostream>
#include<string>
using namespace std;
long long number_reverse(long long n)
{
	long sum=0;
	while(n!=0)
	{
		sum*=10;
		sum+=n%10;
		n=n/10;
	}
	return sum;
}
int main()
{
	long long a,b;cin>>a>>b;
	if(number_reverse(a)>number_reverse(b)) cout<<number_reverse(a);
	else cout<<number_reverse(b);
	
	
	return 0;
}