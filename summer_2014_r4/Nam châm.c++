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
	long n,count=1;
	vector<string>kq;
	cin>>n;
	string s;
	for(long i=0;i<n;i++) 
	{
		cin>>s;
		kq.push_back(s);
	}
	for(long i=0;i<kq.size()-1;i++)
	{
		if(kq[i]!=kq[i+1]) count++;
	
	}
	cout<<count;
	return 0;
}
