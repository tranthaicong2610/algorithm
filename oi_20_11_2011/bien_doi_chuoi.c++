#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string kq="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<='Z'&&s[i]>='A')
		{
			s[i]+=32;
		}
	}
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='u'||s[i]=='e'||s[i]=='i')
		{
			continue;
		}
		else 
		{
			kq+='.';
			kq+=s[i];
		}
	}
	cout<<kq;
	return 0;
}