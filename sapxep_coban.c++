#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int n;
int a[2000];
int main()
{
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}	
	sort(a,a+n);
	for(int i=0;i<n;i++) cout<<a[i]<<endl;
	return 0;
}