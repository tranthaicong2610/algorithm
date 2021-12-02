#include<iostream>
using namespace std;

void LCD_GCD(long a,long b)
{
	long long d=a*b;
	while(a*b!=0)
	{
		if(a>b) a=a%b;
		else b=b%a;
	}
	cout<<d/(a+b)<<" "<<a+b<<endl;
	
}
int main()
{
	long a,b;
	int test;cin>>test;
	while(test--)
	{
		cin>>a>>b;
		LCD_GCD(a,b);
	}
	return 0;
}