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
	string s;cin>>s;
	int k=s.length();
	while(k%3!=0)
	{
		k++;
		s='0'+s;
	}
	vector<string> kq;
	kq.push_back("000");
	kq.push_back("001");
	kq.push_back("010");
	kq.push_back("011");
	kq.push_back("100");
	kq.push_back("101");
	kq.push_back("110");
	kq.push_back("111");
	s=" "+s;
	string temp="";
	for(int i=1;i<s.length();i++)
	{
		temp+=s[i];
		if(i%3==0)
		{
			for(int j=0;j<kq.size();j++)
			{
				if(temp==kq[j]) 
				{
					cout<<j;
					break;
				 } 
			}
			temp="";
		}
	}
//	cout<<s;
	
	return 0;
}
