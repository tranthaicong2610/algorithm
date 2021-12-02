#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	string s;
	cin>>s;
	bool ok=true;
	for(long long i=0;i<s.length();i++)
	{
		if(s[i]=='7'||s[i]=='4');
		else 
		{
			ok=false;
			break;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
 	
	
	return 0;
	
}