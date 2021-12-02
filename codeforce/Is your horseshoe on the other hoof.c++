#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


int main ()
{
	long a[4],count=4;
	for(int i=0;i<4;i++) cin>>a[i];
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(a[i]==a[j]) {
				count--;
				break;
			}
		}
		
	}
	cout<<4-count;
	
	
}