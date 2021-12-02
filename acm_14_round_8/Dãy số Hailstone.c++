#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;


int result(int n)
{
	if(n==0) return 0;
	else {
		int count=1;
		while(n!=1)
		{
			count++;
			if(n%2==0) 
			{
				n=n/2;
			}
			else {
				n=n*3;
				n++;
			}
		}
		return count;
	}
}
int main()
{
	
	
	int n;cin>>n;
	while(n!=0)
	{
		
		cout<<result(n)<<endl;
		cin>>n;
	}
	
	return 0;
}