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
	long a,b,c;cin>>a>>b>>c;
	long long sum;
	if(c==1) sum=a;
	else  sum=(1+c)*c*a/2;
	if(sum>b)
		cout<<sum-b;
	else cout<<0;
	return 0;
}
