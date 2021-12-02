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
	int a,b,h;
	int s1,s2,s3;cin>>s1>>s2>>s3;
	h=(sqrt)((s2*s3)/s1);
	a=s2/h;
	b=s3/h;
	cout<<4*(a+b+h);
	
	return 0;
}