#include<iostream>
using namespace std;
int main()
{
	int a[105],n;
	cin>>n;
	int m;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		a[m]=i;
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	return 0;
}