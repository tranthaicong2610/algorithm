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
	int test ;cin>>test;
	while(test--)
	{
		int n;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='U') cout<<'D';
			else if (s[i]=='D') cout<<"U";
			else cout<<s[i];
		}
		cout<<endl;
	}
	
	return 0;
}