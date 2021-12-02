#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;



int main()
{
	long long  n,k,vt;cin>>n>>k;
	
		if(n%2==0)
	{
		vt =n/2;
		
	}
	else vt=n/2+1;
	if(k-vt<=0)
	{
		cout<<1+2*(k-1);
	}
	else {
		cout<<(k-vt)*2;
	}
	
	
	return 0;
}
