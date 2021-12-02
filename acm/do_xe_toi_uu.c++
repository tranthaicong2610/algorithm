#include<iostream>
using namespace std;
int main()
{
	int test;cin>>test;
	while(test--)
	{
		int n,a,min=200,max=-1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			if(a>max) 
			{
				max=a;
				
			}
			if(a<min) {
				min=a;
				
			}
		}
		cout<<(max-min)*2<<endl;
	}
	return 0;
}