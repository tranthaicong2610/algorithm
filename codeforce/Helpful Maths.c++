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
	string s;
	cin>>s;
	vector<char > a;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='0'&&s[i]<='9') a.push_back(s[i]);
	}
	sort(a.begin(),a.end());
	if(s.size()==1) cout<<a[0];
	else 
	{
		for(int i=0;i<a.size()-1;i++) cout<<a[i]<<"+";
		cout<<a[a.size()-1];
	}
	
	
	
	return 0;
}
