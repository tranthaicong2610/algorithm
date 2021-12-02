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
	string s,tem="";
	cin>>s;
	int count=1;
	for(int i=0;i<s.length();i++)
	{
		if(i<s.length()-2&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
		{
			i+=2;
		}
		else {
			while(i<s.length())
			{
				if(i<s.length()-2&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B') break;
				else {
					cout<<s[i];
					i++;
				}
				
			}
			cout<<" ";
			i+=2;
		}
		 
		
		
	}
	return 0;
}