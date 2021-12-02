#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;
 

int main ()
{
	int n;cin>>n;
	string s;cin>>s;
	int c1=0,c2=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='n') c1++;
		if(s[i]=='z') c2++;
  	}
  	if(c1!=0) for(int i=0;i<c1;i++ ) cout<<1<<" ";
  	if(c2!=0) for(int i=0;i<c2;i++ ) cout<<0<<" ";
	
	return 0;
}