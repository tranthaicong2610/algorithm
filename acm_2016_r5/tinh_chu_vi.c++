#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test;cin>>test;
	while(test--)
	{
		int a,b,c,x,y,z;
		cin>>x>>y>>z;
		c=y*z;
		c=c/x;
		c=(sqrt)(c);
		b=z/c;
		a=x/b;
		cout<<4*(a+b+c)<<endl;
	}
	return 0;
}