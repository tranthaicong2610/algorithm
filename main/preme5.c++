#include<iostream>
using namespace std;
int a[100005]={0};
void sang()
{
	for(int i=2;i<=100000;i++)
	{
		if(!a[i]) 
		{
			for(int j=i*2;j<=100000;j=j+i)
			{
				a[j]=1;
			}
		}
	}
}
int main()
{

	int test;cin>>test;
	while(test--)
	{
			a[1]=1;
		sang();
		int m,n;cin>>m>>n;
		for(int i=m;i<=n;i++)
		{
			if(!a[i]) cout<<i<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}