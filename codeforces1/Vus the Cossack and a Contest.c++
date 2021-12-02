#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	bool ok;
	m>=n&&k>=n ?ok=true :ok=false;
	ok ? cout<<"YES\n" :cout<<"NO\n";

	return 0;
}