#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

int main()
{
	long a,b;
	cin>>a>>b;
	for(int i=1;i<=1000;i++)
	{
		if(a*pow(3,i)>b*pow(2,i)) 
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
