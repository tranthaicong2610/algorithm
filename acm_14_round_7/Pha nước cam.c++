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
	double a,tong=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		tong+=a;
	}
	tong/=n;
	std::cout << std::fixed;
	cout << setprecision(12) << tong;
	
	return 0;
}