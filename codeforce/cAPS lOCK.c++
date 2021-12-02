#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

//string chuyen(string s)
//{
//	for(int i=0;i<s.length();i++)
//	{
//		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
//	}
//	s[0]-=32;
//	return s;
//}
int main ()
{
	string s;
	cin>>s;
	bool caps = true;
	if (s.size()==1) {
		;
	}
	else {
		for (int i=1; i<s.size(); i++) {
			if (s[i] == tolower(s[i])) {
				caps = false;
				break;
			}
		}
	}
	if (caps) {
		for (int i=0; i<s.size(); i++) {
			if (s[i]==tolower(s[i])) {
				s[i] = toupper(s[i]);
			}
			else {
				s[i] = tolower(s[i]);
			}
		}
	}
	cout<<s;
	return 0;
	return 0;
}