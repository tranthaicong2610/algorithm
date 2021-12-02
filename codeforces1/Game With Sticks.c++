#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	if(min(m,n)&1) cout<<"Akshat";
	else cout<<"Malvika";
	return 0;
}