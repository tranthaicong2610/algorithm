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
	int test,a,b,c,n;cin>>test;
	while(test--){
		cin>>n;
		a=-1;
		for(int i=2;i*i<n;i++)
		{
			if(n%i==0)
			{
				a=i;
				break;
			}
		}
		if(a==-1) 
		{
			cout<<"NO"<<endl;
			continue;
		}
		b=-1;
		for(int i=a+1;i*i<n/a;i++)
		{
			if((n/a)%i==0)
			{
				b=i;
				break;
			}
		}
		if(b==-1) 
		{
			cout<<"NO"<<endl;
			continue;
		}
		if(n/(a*b)!=1&&n/(a*b)!=a)
		{
			cout<<"YES"<<endl;
			cout<<a<<" "<<b<<" "<<n/(a*b)<<endl;
		}
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
