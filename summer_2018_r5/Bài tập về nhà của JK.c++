#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long n;
	long long m;
	vector<long long > a;
	cin>>n>>m;
	a.push_back(m);
	for(long i=1;i<n;i++)
	{
		cin>>m;
		bool ok=true;
		for(long i=0;i<a.size();i++)
		{
			if(a[i]==m) ok=false;
		}
		if(ok) a.push_back(m);
	}
	if(a.size()<3) 
	{
		 cout<<"YES";
		
		
	}
	else if(a.size()==3) {
		sort(a.begin(),a.end());
		if((a[1]-a[0])==(a[2]-a[1]) )  cout<<"YES";
		else cout<<"NO";
		
	}
	else cout<<"NO";
	
	return 0;
}