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
	int n;cin>>n;
	int a[101],b[101],c1=0,c2=0;
	for(int i=0;i<n;i++){
		 cin>>a[i];
		 b[i]=a[i];
	}
	sort(b,b+n);
	if(n==2)
	{
		if(a[0]==b[0]&&a[0]!=a[1])
		{
			cout<<1;
		}
		else cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[n-1]) 
		{
			c1=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]==b[0]) 
		{
			c2=n-1-i;
			break;
		}
	}
	
	if(c1+c2>=n) cout<<c1+c2-1;
	else cout<<c1+c2;
	return 0;
}