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
	int n,a,b,count=0;cin>>n;
	while(n--)
	{
		cin>>a>>b;
		if(b-a>=2) count++;
		
	}
	cout<<count;
	
	
	return 0;
}
