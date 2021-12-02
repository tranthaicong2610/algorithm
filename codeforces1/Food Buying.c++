#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	long long n;
	int test;cin>>test;
	while(test--){
		cin>>n;
	long long  sum=n;
	while(n>=10)
	{
		sum+=(n/10);
		int tem=n%10;
		n/=10;
		n+=tem;
//		cout<<1;
	}
	cout<<sum<<endl;
	}
	return 0;
}