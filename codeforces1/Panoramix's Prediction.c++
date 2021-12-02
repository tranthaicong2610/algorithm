#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

bool kt(int n){
	if(n<2) return false;
	for(int i=2;i<=(sqrt)(n);i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	
	int n,m;
	cin>>n>>m;
	if(!kt(m)) {
		cout<<"NO";
		return 0;
	}
	for(int i=n;i<=m;i++)
	{
		if(kt(i)&&i!=n&&i!=m) {
			cout<<"NO";
			return 0;
		}
 	}
 	cout<<"YES";
 	return 0;
}