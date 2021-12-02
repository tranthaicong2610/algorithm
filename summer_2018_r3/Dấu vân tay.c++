#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;


int a[10]={0};
int main()
{
	int n,m;
	
	cin>>n>>m;
	int b[n+2];
	for(int i=0;i<n;i++) cin>>b[i];
	int temp;
	for(int i=0;i<m;i++)
	{
		
		cin>>temp;
		a[temp]=1;
	}

	for(int i=0;i<n;i++) 
	{
		if(a[b[i]]==1) cout<<b[i]<<" ";
		
	}
	return 0;
}