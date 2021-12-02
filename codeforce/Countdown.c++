#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


void result(string s)
{
	long sum=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]!='0'){
			sum+=(s[i]-'0');
			sum++;
		}
		
	}
	sum+=(s[s.length()-1]-'0');
	
	cout<<sum<<endl;
}
int main ()
{
	int test,n ;cin>>test;
	cin.ignore();
	string s;
	while(test--)
	{
		cin>>n;
		cin>>s;
		result(s);
	}
	
	return 0;
}
