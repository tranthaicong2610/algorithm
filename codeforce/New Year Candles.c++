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
	int a,b;
	cin>>a>>b;
	int sum=a;
	while(a>=b)
	{
		sum+=a/b;
		a=a/b+a%b;
	}
	cout<<sum;
	return 0;
}
