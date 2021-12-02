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
	int a[5];
	a[0]=1;
	a[1]=5;
	a[2]=10;
	a[3]=20;
	a[4]=100;
	long n,sum=0;
	cin>>n;
	for(int i=4;i>=0;i--)
	{
		if(n>=a[i])
		{
			sum+=n/a[i];
			n=n%a[i];
			
		}
		
	}
	cout<<sum;	
	
	return 0;
}
