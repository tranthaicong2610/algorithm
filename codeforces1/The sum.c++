#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
void  result( int k){
	long long f1=1,f2=1,sum=0;
	sum+=f1;
	for(int i=1;i<k;i++)
	{
		long long tem=f2;
		f2+=f1;
		f1=tem;
		sum+=f1;
	}
	cout<<sum;
	
}
int main(){
	 int k;cin>>k;
	 result(k);
	 
	
	return 0;
}