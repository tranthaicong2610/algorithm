#include<iostream>
using namespace std;
int main()
{
	int a[13];
	bool ok=false;
	a[0]=4;
	a[1]=7;
	a[2]=44;
	a[3]=47;
	a[4]=77;
	a[5]=444;
	a[6]=447;
	a[7]=474;
	a[8]=477;
	a[9]=744;
	a[10]=747;
	a[11]=774;
	a[12]=777;
	int n;
	cin>>n;
	for(int i=0;i<13;i++)
	{
		if(n%a[i]==0)
		{
			ok=true;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	return 0;
}