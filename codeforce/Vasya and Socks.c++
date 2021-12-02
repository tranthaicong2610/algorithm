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
	long n,k;
	cin>>n>>k;
	long day=0,check=0;
	while(n>0){
		day++;
		check++;
		n--;
		if(k==check) 
		{
			check=0;
			n++;
		}
	}
	cout<<day;	
	
	return 0;
}
