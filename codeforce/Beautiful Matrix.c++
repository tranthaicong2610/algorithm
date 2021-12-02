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
	int a[6][6],kq;
	for(int i=1;i<=5;i++)
	 for(int j=1;j<=5;j++)
	 {
	 	cin>>a[i][j];
	 	if(a[i][j]==1) 
	 	{
	 		kq=abs(i-3)+abs(j-3);
		 }
	 }
	 cout<<kq;
	return 0;
}
