#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;
 
 int usc(int a,int b)
 {
 	while(a*b!=0)
 	{
 		if(a>b) a=a%b;
 		else b=b%a;
	}
 	return a+b;
 }
int main ()
{
	int a,b,n,count=0;
	cin>>a>>b>>n;
	while(n!=0)
	{
		n=n-usc(a,n);
		count++;
		if(n!=0)
		{
			n-=usc(n,b);
			count++;
		}
	}
	if(count%2==0) cout<<"1";
	else cout<<0;
	
	return 0;
}