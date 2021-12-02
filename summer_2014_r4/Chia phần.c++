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
		int n,m;
		cin>>n>>m;
		int count=0;
		for(long i=n;i<n*m;i+=n)
		{
			if(i%m!=0) count++;
		}
		cout<<count;
		return 0;
	}
