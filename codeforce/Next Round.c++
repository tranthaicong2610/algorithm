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
	int n,k;cin>>n>>k;
	int a[n+1];
	int count;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	if(a[0]==a[n-1]&&a[n-1]==0) cout<<0;
	else 
	{
		 count=k;
		for(int i=n-k;i>=1;i--)
		{
			if(a[i]==a[i-1]&&a[i]!=0) count++;
			else break;
			
			
		}
		for(int i=n-k;i<n;i++) if(a[i]==0) count--;
		cout<<count;
	}
	
	return 0;
}
