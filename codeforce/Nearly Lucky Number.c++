#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;
bool kt(long long a){
	if(a==0) return false;
	while(a!=0)
	{
		int temp=a%10;
		if(temp==4||temp==7) a=a/10;
		else return false;
	}
	return true;
}
bool result(string s){
	long long count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='4'||s[i]=='7') count++;
		
	}
	if(kt(count)) return true;
	return false;
}
int main()
{
	string s;
	cin>>s;
	if(result(s)) cout<<"YES";
	else cout<<"NO";
	return 0;
}
