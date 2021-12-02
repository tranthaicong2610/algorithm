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
	int a[500],count=0;
	for(int i=0;i<300;i++) a[i]=0;
	string s;cin>>s;
	for(int i=0;i<s.length();i++)
	{
		a[s[i]]=1;
	}
//	int m=s.length();
	for(int i=0;i<300;i++)
	{
		if(a[i]==1) count++;
 	}
 	if(count%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
//	for(int i=0;i<300;i++) cout<<a[i];
	return 0;
}