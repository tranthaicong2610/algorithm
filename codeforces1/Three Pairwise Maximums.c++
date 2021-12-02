#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

void result(long long x,long long y,long long z)
{
	long long a[3];
	a[0]=x;
	a[1]=y;
	a[2]=z;
	sort(a,a+3);
	if(x==y&&x==z) {
			cout<<"YES"<<endl;
			cout<<x<<" "<<x<<" "<<x;
			
		}
	else {
		if(x!=y&&x!=z&&y!=z) cout<<"NO";
		
		else if(a[0]==a[1]) cout<<"NO";
		else cout<<"YES"<<endl<<a[2]<<" "<<a[0]<<" "<<a[0];
	}
}

int main(){
	
	int test;cin>>test;
	long long x,y,z;
	while(test--){
		cin>>x>>y>>z;
		result(x,y,z);
		cout<<endl;
		
	}
	
	
	
 	return 0;
}