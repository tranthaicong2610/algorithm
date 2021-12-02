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
	int n;
	string s;
	
	while(test--){
		cin>>n>>s;
		int vt=-1;
		for(int i=0;i<n-1;i++)
		{
			if(s[i]!=s[i+1]) {
				vt=i;
				break;
			}
		}	
		if(vt==-1||n==1) cout<<-1<<" "<<-1;
		else cout<<vt+1<<" "<<vt+2;
		cout<<endl; 
			
		
	}
	
	return 0;
}