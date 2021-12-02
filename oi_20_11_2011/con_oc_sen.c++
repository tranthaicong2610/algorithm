#include<iostream>
using namespace std;
int main()
{
	long a,b,day=0,met=0,v;
	cin>>a>>b>>v;
	while(met<v)
	{
		day++;
		met+=a;
		if(met>=v) break;
		met-=b;
		
	}
	cout<<day;
	return 0;
}