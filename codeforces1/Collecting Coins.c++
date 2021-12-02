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
	long long a,b,c,n,balance;
	while(test--){
		cin>>a>>b>>c>>n;
		long long maxx=max(a,b);
		maxx=max(maxx,c);
		maxx=maxx*3-a-b-c;
		if(n<maxx) cout<<"NO";
		else {
			n=n-maxx;
			if(n%3==0) cout<<"YES";
			else cout<<"NO";
		}
		cout<<endl;
	}
 	return 0;
}