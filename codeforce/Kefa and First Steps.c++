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
	long n;
	cin>>n;
	long a[n+1];
	for(long i=0;i<n;i++) cin>>a[i];
	long kq=1,count=1,tem=a[0];
	for(long i=1;i<n;i++)
	{
		if(tem<=a[i])
		{
			tem=a[i];
			count++;
			kq=max(kq,count);
		}
		else 
		{
			tem=a[i];
			
			count=1;
		}
	}
	cout<<kq;
	return 0;
}