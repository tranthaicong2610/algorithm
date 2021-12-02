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
	
	long k,l,m,n,d;	
	cin>>k>>l>>m>>n>>d;
	long a[d+1];
	for(int i=1;i<=d;i++) a[i]=0;
	for(long i=1;i<=d;i++)
	{
		if(i*k<=d) a[i*k]=1;
		if(i*l<=d) a[i*l]=1;
		if(i*m<=d) a[i*m]=1;
		if(i*n<=d) a[i*n]=1;
		
	}
	long dem=0;
	for(long i=1;i<=d;i++) if(a[i]==1) dem++;
	cout<<dem;
	
}