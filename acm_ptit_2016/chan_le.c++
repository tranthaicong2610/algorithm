#include<iostream>
#include<string>
using namespace std;
bool resolt(string s)
{
	bool ok=true;
	for(int i=0;i<s.length();i++)
	{
		if((i+1)%2==0)
		{
			if(s[i]=='0'||s[i]=='2'||s[i]=='4'||s[i]=='6'||s[i]=='8');
			else 
			{
				return false;
			}
		}
		if((i+1)%2==1)
		{
			if(s[i]=='1'||s[i]=='3'||s[i]=='5'||s[i]=='7'||s[i]=='9');
			else 
			{
				return false;
			}
		}
	}
	return true;
	
}
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	while(n--)
	{
		cin>>s;
		if(resolt(s)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
		
		
	}
	return 0;
}