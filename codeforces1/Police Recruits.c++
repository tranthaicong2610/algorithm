#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


int main(){
	long  n;cin>>n;
	long k;
	long count1=0;
	long count2=0;
	for(long i=0;i<n;i++)
	{
		cin>>k;
		if(k!=-1) count1+=k;
		else {
			if(count1!=0) {
				count1--;
			}
			else {
				count2++;
			}
		}
		
	}
	cout<<count2;
	
	return 0;
}