#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
void  result( long long n){
	long long k;
	k=1;
	while(k*2<=n){
		k*=2;
	}
	k--;
	cout<<k;
}
int main(){
	 long long n;
	long test;cin>>test;
	while(test--){
		cin>>n;
		result(n);
		cout<<endl;
	}
	
	return 0;
}