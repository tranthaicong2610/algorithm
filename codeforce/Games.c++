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
	int a[105],b[105];
	for(int i=0;i<=100;i++) 
	{
		a[i]=0;
		b[i]=0;
	}
	int n,c,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c>>d;
		a[c]++;
		b[d]++;
	}
	long tong=0;
	for(int i=0;i<101;i++)
	{
		if(a[i]!=0&&b[i]!=0)
		{
			tong+=a[i]*b[i];
		}
	}
	cout<<tong;
	return 0;
}
