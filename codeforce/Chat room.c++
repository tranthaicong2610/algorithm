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
	string s,kq="",temp="hello";
	cin>>s;
	
	for(int i=0;i<s.length();i++)
	{
		if(kq==""&&s[i]=='h') kq+=s[i];
		else if(kq=="h"&&s[i]=='e') kq+=s[i];
		else if(kq=="he"&&s[i]=='l') kq+=s[i];
		else if(kq=="hel"&&s[i]=='l') kq+=s[i];
		else if(kq=="hell"&&s[i]=='o') {
			kq+=s[i];
			break;
		}
		
		
	}
	
	if(kq==temp) cout<<"YES";
	else cout<<"NO";
	
	
	
	return 0;
}
