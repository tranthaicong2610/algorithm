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
	int n;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) a[i]=0;
	int p,q;cin>>p;
	for(int i=1;i<=p;i++)
	{
		int tem;
		cin>>tem;
		a[tem]=1;
	}  	
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int tem;
		cin>>tem;
		a[tem]=1;
	}  
	
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0) 
		{
			cout<<"Oh, my keyboard!";
			return 0;
		}
	}
	cout<<"I become the guy.";	
	
}