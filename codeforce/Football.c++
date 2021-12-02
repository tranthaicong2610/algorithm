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
	int count=1;
	string s;cin>>s;
	bool ok=false;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
			
		}
		else count=1;
		if(count==7) {
			ok=true;
			break;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0;
}
