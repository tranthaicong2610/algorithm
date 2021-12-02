#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string s,kq="";
	cin>>s;
	int count=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		count++;
		
		if(count==3) {
			kq+=s[i];
			kq+=",";
			
			count=0;
		}
		else kq+=s[i];
		
	}
	for(int i=kq.length()-1;i>=0;i--) cout<<kq[i];
	
	
	
	return 0;
}