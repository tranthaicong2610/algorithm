#include<iostream>
#include<string>
using namespace std;

int main()
{
	int test;cin>>test;
	while(test--)
	{
		string s;cin>>s;
	int tong=0;
	for(int i=0;i<s.length();i++)
	{
		int temp=s[i]-'0';
		tong+=temp;
	}
	if(tong%9==0&&tong>0) cout<<"1";
	else cout<<"0";
	cout<<endl;
	}
	return 0;
}