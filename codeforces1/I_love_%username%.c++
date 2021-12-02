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
	int n,sum=0;
	long a,b,maxx,minn;
	cin>>n;
	if(n==1) {
		cout<<0;
		return 0;
	}
	cin>>a;
	maxx=a,minn=a;
	n--;
	while(n--){
		cin>>b;
		if(b>maxx){
			maxx=b;
			sum++;
		}
		if(b<minn){
			minn=b;
			sum++;
		}
	}
	cout<<sum;
 	return 0;
}