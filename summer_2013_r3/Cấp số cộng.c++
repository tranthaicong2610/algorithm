#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;


int main()
{
	int a[3];
	for(int i=0;i<3;i++) cin>>a[i];
	sort(a,a+3);
	long sum=10000;
	for(int i=2;i>=1;i--)
	{
		if(sum>a[i]-a[i-1])
		{
			sum=a[i]-a[i-1];
		}
	}
	int kq;
	bool ok=false;
	for(int i=0;i<=1;i++)
	{
		if(a[i]+sum!=a[i+1])
		{
			kq=a[i]+sum;
			ok=true;
			break;
		}
		
	}
//	cout<<sum<<endl<<kq<<endl;
	if(ok) cout<<kq;
	else cout<<a[2]+sum;
	
	
	return 0;
}