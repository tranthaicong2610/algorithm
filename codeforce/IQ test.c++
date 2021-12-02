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
	int a[n+1];
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		a[i]=a[i]%2;
	}
	int count1=0,count2=0,kq;
	for(int i=1;i<=n;i++)
	{
		if(a[i]) count1++;
		else count2++;
		
	}
	if(count1>count2)
	{
		for(int i=1;i<=n;i++) 
			if(a[i]==0) {
				cout<<i;
				break;
			}
	}
	else {
		for(int i=1;i<=n;i++) 
			if(a[i]!=0) {
				cout<<i;
				break;
			}
	}
	return 0;
}
