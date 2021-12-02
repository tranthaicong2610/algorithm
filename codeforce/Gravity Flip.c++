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
	int n;
	cin>>n;
	int a[10005];
	for(int i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i]<<" "; 
}