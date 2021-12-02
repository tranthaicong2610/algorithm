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
	
	int n,m,count=0;cin>>n>>m;
	for(int i=0;i<=31;i++)
	{
		for(int j=0;j<=31;j++)
		{
			if(pow(i,2)+j-n==0&&pow(j,2)+i-m==0){
				count++;
				break;
			}
		}
	}
	cout<<count;
	
 	return 0;
}