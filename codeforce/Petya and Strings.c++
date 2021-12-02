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
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='Z') 
		{
			s[i]+=32;
		}
	}
	return s;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	s1=chuyen(s1);
	s2=chuyen(s2);
	if(s1<s2) cout<<-1;
	else if(s1>s2) cout<<1;
	else cout<<0;
	return 0;
}
