#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


string change65(string s)
{
	for(int i=0;i<s.length();i++) 
	{
		if(s[i]=='6') s[i]='5';
	}
	return s;
}
string change56(string s)
{
	for(int i=0;i<s.length();i++) 
	{
		if(s[i]=='5') s[i]='6';
	}
	return s;
}
long string_number(string s)
{
	long tong =0;
	for(int i=0;i<s.length();i++)
	{
		tong*=10;
		int temp=s[i]-'0';
		tong+=temp;
		
	}
	return tong;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	cout<<string_number(change65(s1))+string_number(change65(s2)) <<" ";
	cout<<string_number(change56(s1))+string_number(change56(s2));
	
	
	
	return 0;
}