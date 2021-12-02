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
	int n;
	cin>>n;
	int a,b,c,d;
	for(int i=n+1;i<=9012;i++)
	{
		a=i%10;
		b=(i%100)/10;
		c=(i%1000)/100;
		d=i/1000;
		if(a!=b&&a!=c&&a!=d&&c!=b&&d!=b&&c!=d)
		{
			cout<<i;
			return 0;
		}
	}
	
	
//	return 0;
}
