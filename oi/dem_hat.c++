#include<iostream>
using namespace std;

int main()
{
	int n,a,kt=3;
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a==kt) 
		{
			count++;
			kt=3;
			
		}
		else 
		{
			kt=a;
		}
	}
	cout<<count;
	
	return 0;
	
}