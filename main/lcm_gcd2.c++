#include<iostream>
using namespace std;

long long LCD_GCD(long long a,int b)
{
	long long d=a*b;
	while(a*b!=0)
	{
		if(a>b) a=a%b;
		else b=b%a;
	}
	return d/(a+b);
	
}
int main()
{
	int n;
	
	int test;cin>>test;
	while(test--)
	{
		long long kq=1;
		cin>>n;
		for(int i=1;i<=n-1;i++)
		{
			kq=LCD_GCD(kq,i+1);
		}
		cout<<kq<<endl;
		
		
	}
	return 0;
}