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
	int n;cin>>n;
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='D') count++;
	}
	if(s.length()-count==count) cout<<"Friendship";
	else if(count>s.length()-count) cout<<"Danik";
	else cout<<"Anton";
	
	
	return 0;
}
