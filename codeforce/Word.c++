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
	cin>>s;
	long count1=0,count2=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z') count1++;
		else count2++;
	}
	if(count1>=count2)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='A'&&s[i]<='Z')  s[i]+=32;
		}
	}
	else 
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='a'&&s[i]<='z')  s[i]-=32;
		}
	}
	cout<<s;
	return 0;
}
