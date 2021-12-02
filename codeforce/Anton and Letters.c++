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
	string s;
	getline(cin,s);
	int a[300];
	for(int i=0;i<=299;i++) a[i]=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		a[s[i]]=1;
	}
	int count=0;
	for(int i=0;i<300;i++) 
	{
		if(a[i]) count++;
	}
	cout<<count;
	return 0;
}
