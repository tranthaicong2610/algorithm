#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


bool result(string s )
{
	
	if(s[0]=='4') return false;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1'||s[i]=='4');
		else return false;
	}
	if(s.length()<3) return true;
	else {
		for(int i=2;i<s.length();i++)
		{
			if(s[i]=='4'&&s[i-1]=='4'&&s[i-2]=='4') return false;
		}
		
	}
	return true;
}
int main ()
{
	string s;cin>>s;
	if(result(s))cout<<"YES";
	else cout<<"NO"; 
	return 0;
}
