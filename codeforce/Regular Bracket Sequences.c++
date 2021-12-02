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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cout<<string(i,'(')<<string(i,')');
			for(int j=i;j<n;j++)
				cout<<"()";
			cout<<endl;
		}
	}
	return 0;
}