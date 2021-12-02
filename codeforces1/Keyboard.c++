#include<iostream>
#include<vector>
using namespace std;
int main(){
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	char check;
	string kq;
	cin>>check;
	cin>>kq;
	if(check=='R')
	{
		for(int i=0;i<kq.length();i++)
		{
			for(int j=0;j<s.length();j++)
			{
				if(kq[i]==s[j])
				{
					cout<<s[j-1];
					break;
				}
			}
		}
	}
	else {
		for(int i=0;i<kq.length();i++)
		{
			for(int j=0;j<s.length();j++)
			{
				if(kq[i]==s[j])
				{
					cout<<s[j+1];
					break;
				}
			}
		}
	}

	return 0;
}