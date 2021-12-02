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
	int test,n;cin>>test;
	string s;
	cin.ignore();
	while(test--)
	{
		cin>>n;
		cin>>s;
		int a[305];
		for(int i=0;i<300;i++) a[i]=0;
		char tem=s[0];
		
		a[tem]++;
		
		for(int i=1;i<s.length();i++)
		{
			if(tem!=s[i]) 
			{
				tem=s[i];
				a[tem]++;
			}
		}
		
		bool ok=true;
		for(int i=0;i<300;i++)
		{
			if(a[i]>1) {
				ok=false;
				break;
			}
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}