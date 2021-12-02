#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

void result(int h,int m)
{
	int sum_m=60*24;
	cout<<sum_m-h*60-m<<endl;
}

int main(){
	
	int test,h,m;
	cin>>test;
	while(test--)
	{
		cin>>h>>m;
		result(h,m);
	}
	
	
	
 	return 0;
}