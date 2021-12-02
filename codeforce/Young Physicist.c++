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
	int a,tong=0,x=0,y=0,z=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		x+=a;
		cin>>a;
		y+=a;
		cin>>a;
		z+=a;
	}
	if(x==0&&y==0&&z==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
