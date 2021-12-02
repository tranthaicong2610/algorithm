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
	int n,sum=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			sum+=i;
			sum+=j;
		}
	}
//	sum=n*(n+1)*(n+2)/2;	
	cout<<sum;
	
	return 0;
}
