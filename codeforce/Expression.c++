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
	int a,b,c;
	cin>>a>>b>>c;
	int sum1=max(a+b*c,a*(b+c));
	sum1=max(a+b+c,sum1);
	int sum2=max(a*b*c,(a+b)*c);
	cout<<max(sum1,sum2);
	return 0;
}