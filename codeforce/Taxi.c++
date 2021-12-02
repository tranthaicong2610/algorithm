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
	int n;cin>>n;
	int a[5];
	for(int i=1;i<=4;i++) a[i]=0;
	int nhap;
	for(int i=0;i<n;i++)
	{
		cin>>nhap;
		a[nhap]++;
	}
	int sum=0;
	sum+=a[4];
	if(a[3]>=a[1])
	{
		sum+=a[3];
		a[1]=0;
	}
	else 
	{
		sum+=a[3];
		a[1]-=a[3];
	}
	sum+=a[2]/2;
	int tong =(a[2]%2)*2+a[1];
	sum+=tong/4;
	if((tong)%4!=0) sum++;
	cout<<sum;
	return 0;
}