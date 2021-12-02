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
	long long n,k;cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		if(n%10==0) n/=10;
		else n--;
	}
	cout<<n;
	
	return 0;
}
