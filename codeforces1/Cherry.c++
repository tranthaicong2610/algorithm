#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

int main()
{
	int test ;cin>>test;
	while(test--)
	{
		long long n,maxx=0;
		cin>>n;
		long long a[n+1];
		cin>>a[0];
		for(long i=1;i<n;i++) {
			cin>>a[i];
			maxx=max(maxx,a[i]*a[i-1]);
		}
		cout<<maxx<<endl;
		
	}
	
	return 0;
}