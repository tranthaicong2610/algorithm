#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


int main(){
	
	int n,m,t;
	
	int a[1005];
	int test;
	cin>>test;
	while(test--)
	{
		bool ok=true;
		for(int i=0;i<1001;i++) a[i]=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>t;
			a[t]++;
			if(a[t]>1) a[t]--;
			
		}
		for(int i=0;i<m;i++)
		{
			cin>>t;
			a[t]++;
			if(a[t]==1) a[t]=0;
			
		}
		
		for(int i=1000;i>=0;i--)
		{
			if(a[i]>=2) 
			{
				cout<<"YES"<<endl;
				cout<<1<<" "<<i<<endl;
				
				ok=false;
				break;
			}
		}
		if(ok) cout<<"NO"<<endl;
	}
 	return 0;
}