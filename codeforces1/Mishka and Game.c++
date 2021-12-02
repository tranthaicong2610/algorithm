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
	int n,a,b,sum1=0,sum2=0;
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(a>b) sum1++;
		if(b>a) sum2++;
	}
	if(sum1>sum2) cout<<"Mishka";
	else if(sum1==sum2) cout<<"Friendship is magic!^^";
	else cout<<"Chris";
	return 0;
}