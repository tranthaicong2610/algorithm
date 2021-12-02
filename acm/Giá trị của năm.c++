#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

bool check_year(int n)
{
	if(n%400==0) return true;
	if(n%4==0&&n%100!=0) return true;
	return false;
}
int main()
{
	int sum=0;
	int month=868 +630;
	int day=1869;
	int year;cin>>year;
	if(check_year(year))
	{
		sum=3597;
		int temp=0;
		while(year!=0)
		{
			temp+=year%10;
			year/=10;
		}
		sum+=temp*366;
	}
	else {
		sum=3584;
		int temp=0;
		while(year!=0)
		{
			temp+=year%10;
			year/=10;
		}
		sum+=temp*365;
	}
	cout<<sum;
	
	return 0;
}
