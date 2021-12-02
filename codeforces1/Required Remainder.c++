#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int test;cin>>test;
	while(test--)
	{
		unsigned long long x,y,n;
		cin>>x>>y>>n;
		if(n<x) cout<<y;
		else {
			if((n/x)*x+y<=n) cout<<(n/x)*x+y;
			else cout<<(n/x)*x+y-x;
		}
		cout<<endl;
	}
	return 0;
}