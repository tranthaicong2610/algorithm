#include<iostream>
using namespace std;
int a[10005];
int main()
{
	int test,n;
	cin>>test;
	while(test--)
	{
		cin>>n;
		for(int i=0;i<=n;i++) a[i]=0;
		
		for(int i=2;i<=n;i++)
		{
			if(!a[i]) 
			{
				for(int j=i*2;j<=n;j=j+i) a[j]=1;
				
			}
		}
		for(int i=2;i<=n;i++)
		{
			if(a[i]==0) cout<<i<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}