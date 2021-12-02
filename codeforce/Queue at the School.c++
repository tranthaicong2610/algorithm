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
	int n,k;cin>>n>>k;
	string s,kq="";
	cin>>s;
	
	int count=0;
	while(k--)
	{
		for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]=='B'&&s[i+1]=='G')
		{
			swap(s[i],s[i+1]);
			i++;	
			
		}
		
	}
	}
	
	cout<<s;
	return 0;
}
