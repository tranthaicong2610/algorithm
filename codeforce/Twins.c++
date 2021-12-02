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
	int n;
	long sum=0;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		sum+=a[i];
		
	}
	 sum/=2;
	
	long sum2=0,count=0;
	sort(a,a+n);
	for(int i=n-1;i>=0;i--)
	{
		count++;
		sum2+=a[i];
		if(sum2>sum) break;
	}
	cout<<count;
	
	return 0;
}
