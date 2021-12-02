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
	long n;
	cin>>n;
	if(n%2==1) cout<<-1;
	else 
	{
		for(int i=1;i<=n/2;i++)
		{
			cout<<2*i<<" "<<2*i-1<<" ";
		}
	}
	
	return 0;
}
