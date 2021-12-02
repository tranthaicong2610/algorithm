#include<iostream>
using namespace std;
int main(){
	int test;cin>>test;
	while(test--){
		int n,a,sum1=0,sum0=0;
		cin>>n;
		for(int i=0;i<2*n;i++)
		{
			cin>>a;
			if(a%2==0) sum0++;
			else sum1++;
		}
		if(sum0==sum1) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}