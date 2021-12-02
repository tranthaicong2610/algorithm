#include<iostream>
#include<algorithm>
using namespace std;
long long a[100005];
int main()
{
	long n,k;
	cin>>n>>k;
	if(n>k)
	{
		cout<<k<<" "<<(n-k)/2;
	}
	else cout<<n<<" "<<(k-n)/2;
	return 0;
	
}