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
	int n;
	cin>>n;
	int a,b,max_on_bus=0,number_on_people=0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		number_on_people+=b-a;
		max_on_bus=max(number_on_people,max_on_bus);
	}
	cout<<max_on_bus;
	
	
	return 0;
}
