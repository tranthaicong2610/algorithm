#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


int main(){
	
	int test;cin>>test;
	long long n;
	while(test--){
		cin>>n;
		if(n==1) cout<<0<<endl;
		else{
			bool ok=true;
			int count=0;
			while(1){
				if(n==1) 
				{
					
					break;
				}
				else if(n%6==0)
				{
					
					n=n/6;
					count++;
				}
				else {
					if(n%3==0) 
					{
						n*=2;
						count++;
						
					}
					else {
						ok=false;
						break;
					}
				}
			}
			if(ok) cout<<count;
			else cout<<-1;	
			cout<<endl;
		}
	}
 	return 0;
}