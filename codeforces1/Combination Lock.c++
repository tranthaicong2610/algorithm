#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s,s2;cin>>s>>s2;
	int sum=0;
	for(int i=0;i<s.length();i++)
	{
		int tem=s[i]-'0';
		int tem2=s2[i]-'0';
		sum+=min(abs(tem-tem2),10-abs(tem-tem2));

	}
	cout<<sum;

	return 0;
}