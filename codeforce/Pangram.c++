#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;
string chuyen(string s)
{
	for(int i=0;i<=s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='Z') 
		{
			s[i]=s[i]+32;
		}
	}
	return s;
}
int main()
{
	int n;cin>>n;
	string s;
	cin>>s;
	s=chuyen(s);
	int a[305];
	for(int i=0;i<305;i++)
	{
		a[i]=0;
	}
	for(int i=0;i<s.length();i++)
	{
		a[s[i]]=1;
	}
	int sum=0;
	for(int i=0;i<305;i++)
	{
		if(a[i]==1) sum++;
	}
	if(sum==26) cout<<"YES";
	else cout<<"NO";
	return 0;
}
