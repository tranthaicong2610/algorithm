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
	int test;cin>>test;
	while(test--)
	{
		long long a,b,c,n;
		cin>>a>>b>>c>>n;
		long long m=max(a,b);
		m=max(m,c);
		if(a+b+c-3>=n&&(2*m-(a+b+c+1))<=n) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	
	return 0;
}