#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;

string 	result(string s)
{	
	vector<string>a;
	a.push_back("000");
	a.push_back("001");
	a.push_back("010");
	a.push_back("011");
	a.push_back("100");
	a.push_back("101");
	a.push_back("110");
	a.push_back("111");
	while(s.length()%3!=0)
	{
		s='0'+s;
	}
	string kq="",m;
	for(int i=0;i<s.length();i++)
	{
		m="";
		int k=3;
		while(k--)
		{	
			m+=s[i];
			i++;
			
		} i--;
		for(int j=0;j<a.size();j++)
		{
			if(a[j]==m) 
			{
				char temp='0'+j;
				kq=kq+temp;
				break;
			}
		}
		
		
		
	}
	return kq;
}
int main()
{
	string s;
	cin>>s;
	cout<<result(s);
//	result(s);
	
	return 0;
}