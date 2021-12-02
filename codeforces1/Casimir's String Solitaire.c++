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
	int sum1=0,sum2=0,sum3=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A') sum1++;
		else if(s[i]=='B') sum2++;
		else sum3++;
	}
	if(sum2==sum1+sum3) cout<<"YES";
	else cout<<"NO";
	cout<<endl;
}

int main(){
	
	int test;
	cin>>test;
	string s;
	cin.ignore();
	while(test--){
		cin>>s;
		result(s);
	}
	
	
	
 	return 0;
}