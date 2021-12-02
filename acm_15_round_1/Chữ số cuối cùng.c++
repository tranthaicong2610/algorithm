#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;


int main()
{
	int test;cin>>test;
	while(test--)
	{
		long long n;
		cin>>n;
		int temp=0;
		while(n>=10)
		{
			temp=0;
			while(n!=0)
			{
				temp+=n%10;
				n=n/10;
			}
			n=temp;
			
		}
		cout<<n<<endl;
	}
	
	
	return 0;
}