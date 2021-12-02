#include<iostream>
#include<cmath>
using namespace std;
bool ktsnt(long long n)
{
	if(n<2) return false;
	else{
		for(long i=2;i<=(sqrt)(n);i++)
		{
			if(n%i==0) return false;
		}
	} 
	return true;
}
//void result(long long n)
//{
//	if(ktsnt(n)) cout<<n<<" ";
//	else {
//		long long d=n;
//		for(long i=2;i<=(sqrt)(n);i++)
//		{
//			
//			while(d%i==0&&d!=0)
//			{
//				cout<<i<<" ";
//				d=d/i;
//				
//			}
//		}
//		}
//		cout<<endl;
//}
void result(long long n)
{
	while(n%2==0) 
	{
		cout<<2<<" ";
		n=n/2;
	}
	for(long long i=3;i<=(sqrt)(n);i+=2)
	{
		while(n%i==0)
		{
			cout<<i<<" ";
			n=n/i;
		 } 
	}
	if(n>1) cout<<n;
	cout<<endl;
}
int main()
{
	long long n;
	int test;cin>>test;
	while(test--)
	{
		cin>>n;
		result(n);
	}
	return 0;
}
 