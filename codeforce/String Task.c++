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
	string s,kq="";
	cin>>s;
	s=chuyen(s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'||s[i]=='y');
		else kq+=s[i];
	}
	for(int i=0;i<kq.length();i++) cout<<"."<<kq[i];
	return 0;
}
