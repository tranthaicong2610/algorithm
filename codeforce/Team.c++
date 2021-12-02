#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;
bool check(int a,int b,int c)
{
	if(a+b+c>=2) return true;
	return false; 
}

int main()
{
	int n;cin>>n;
	int a,b,c,count=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(check(a,b,c)) count++;
	}
	cout<<count;
	
	return 0;
}
