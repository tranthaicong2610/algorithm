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
	int test;cin>>test;
	long long n;
	while(test--)
	{
		
		cin>>n;
		if(n==0||n==1){
			cout<<0<<endl;
			continue;
		} 
		else {
			cout<<(n+1)/2-1<<endl;
		}
		
	}
	return 0;
}