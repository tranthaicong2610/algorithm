#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a[8];
	for(int i=0;i<8;i++) cin>>a[i];
	bool ok1=true,ok2=true;
	for(int i=0;i<7;i++) 
	{
		if(a[i]>a[i+1]);
		else 
		{
			ok1=false;
			break;
		}
		
	}
	if(ok1) cout<<"descending";
	
	for(int i=0;i<7;i++) 
	{
		if(a[i]<a[i+1]);
		else 
		{
			ok2=false;
			break;
		}
		
	}
	if(ok2) cout<<"ascending";
	if(!ok1&&!ok2) cout<<"mixed";
	
	return 0;
}