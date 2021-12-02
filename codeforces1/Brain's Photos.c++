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
	int n,m;
	cin>>n>>m;
	char a;
	long sum1=0,sum2=0;
	bool ok=false;
	for (long i=1;i<=n*m;i++) 
	{
		cin>>a;
		if(a=='Y'||a=='C'||a=='M'){
			ok=true;
		}
		
	}
	if(ok) cout<<"#Color";
	else cout<<"#Black&White";
	
	return 0;
}