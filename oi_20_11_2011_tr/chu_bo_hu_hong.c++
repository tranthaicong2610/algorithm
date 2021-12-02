#include<iostream>
using namespace std;
int main()
{
	bool ok=true;
	int n,m,c1,c2;cin>>n>>m;
	int a[m+5];
	for(int i=1;i<=n;i++) a[i]=0;
	int d=m;
	for(int i=1;i<=m;i++)
	{
		cin>>c1>>c2;
		if(c1==1||c2==1) 
		{
			a[c1]=1;
			a[c2]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		 if(a[i]==0) 
		 {
		 	ok=false;
		 	cout<<i<<endl;
		 }
	}
	
	if(ok) cout<<0;
	return 0;
}