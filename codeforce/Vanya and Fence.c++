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
	int n,h;
	cin>>n>>h;
	int a[n+1];
	for(int i=0;i<n;i++) cin>>a[i];
	int count=0;
	for(int i=0;i<n;i++) 
	{
		if(a[i]>h) count++;
	}
	cout<<count+n;
	
	
	return 0;
}
