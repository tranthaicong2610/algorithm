#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;



int main ()
{
	int test;cin>>test;
	while(test--)
	{
		long long n;cin>>n;
	if(n%2050==0) {
		long count=0;
		n=n/2050;
		for(int i=18;i>=0;i--)
		{
			if(n>=pow(10,i))
			{
				long long tem=pow(10,i);
				count+=(n/pow(10,i));
				n=n%tem;
				
			}
		}
		cout<<count<<endl;
	}
	else cout<<-1<<endl;
	}
	return 0;
}
