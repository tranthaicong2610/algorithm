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
	long long n;
	double l;
	cin>>n>>l;
	double a[n+1];
	
	for(long i=0;i<n;i++) cin>>a[i];
	
	sort(a,a+n);
	double maxx=max(a[0],(l-a[n-1]));

	for(long i=1;i<n;i++) maxx=max((a[i]-a[i-1])/2,maxx);
	std::cout << std::fixed;
	cout<<setprecision(9) << maxx;
	return 0;
}