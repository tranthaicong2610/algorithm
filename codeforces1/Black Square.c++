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
	int a[5];
	for(int i=1;i<5;i++) cin>>a[i];
	string s;
	cin>>s;
	long sum=0;
	for(int i=0;i<s.length();i++){
		sum+=a[s[i]-'0'];
	}
	cout<<sum;
 	return 0;
}