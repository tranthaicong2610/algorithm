#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;

long long firt_number(long long a)
{
	while(a>=10) a=a/10;
	return a;
}
int main()
{
	int a,b;
	bool ok=false;
	long long c;
	cin>>a>>b;
	for(int i=a+1;i<=62;i++)
	{
		c=pow(2,i);
		if(firt_number(c)==b) 
		{
			ok=true;
			c=i;
			break;
		}
	}
	if(ok)
	{
		cout<<c;
	}
	else cout<<0;
	
	return 0;
}