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
		long n;
		cin>>n;
		if(n==1) cout<<0;
		else if (n==2) cout<<1;
		else if(n==3) cout<<2;
		else if(n%2==0) cout<<2;
		else cout<<3;
		cout<<endl;
	}
	return 0;
}
