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
	vector<int>a;
	for(int i=1;i<2000;i++)
	{
		if(i%3==0||i%10==3) continue;
		else a.push_back(i);
	}
	int test;cin>>test;
	while(test--)
	{
		int k;
		cin>>k;
		cout<<a[k-1]<<endl;
	}
	
	return 0;
}