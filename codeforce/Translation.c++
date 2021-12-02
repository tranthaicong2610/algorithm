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
	string s1,s2;
	cin>>s1>>s2;
	string k="";
	for(int i=s1.length()-1;i>=0;i--)k+=s1[i];
	if(k==s2) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
