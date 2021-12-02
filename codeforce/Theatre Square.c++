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
	long long n,m,a;
	cin>>n>>m>>a;
	long long k,s;
	k=n/a;
	s=m/a;
	if(n%a>0) k++;
	if(m%a>0) s++;
	cout<<k*s;
	
	
	return 0;
}
