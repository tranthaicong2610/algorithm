#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

void result(int n,int t)
{
	if(n==1&&t==10) cout<< -1;
	else {
		if(t==10){
			cout<<t;
			n--;n--;
			while(n--){
			cout<<0;
			}	
		}
		else {
			cout<<t;
			n--;
			while(n--){
			cout<<0;
			}
		}
		
	}
}

int main(){
	
	int n,t;cin>>n>>t;
	result(n,t);
	
	
	
 	return 0;
}