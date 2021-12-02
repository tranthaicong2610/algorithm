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
		int count =0;
		cin.ignore();
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<s.length();j++)
			{
				if(s[j]=='-') 
				{
					count--;
					break;
				}
				if(s[j]=='+') 
				{
					count++;
					break;
				}
			}
		}
		cout<<count;
		return 0;
	}
