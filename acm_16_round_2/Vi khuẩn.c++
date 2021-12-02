#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;


long result(long n)
{
	long ans=0;
	while(n!=0)
	{
		if(n%2) ans++;
		n=n/2;
	}
	return ans;
}
int main()
{
	long x;cin>>x;
	cout<<result(x);
	
	return 0;
}