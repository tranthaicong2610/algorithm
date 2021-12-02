#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;


int main()
{
	int x,y;
	cin>>x>>y;
	bool ok=true;
	vector<int > a;
	a.push_back(2);
	a.push_back(3);
	a.push_back(5);
	a.push_back(7);
	a.push_back(11);
	a.push_back(13);
	a.push_back(17);
	a.push_back(23);
	a.push_back(29);
	a.push_back(31);
	a.push_back(37);
	a.push_back(41);
	a.push_back(43);
	a.push_back(47);
	
	if(x==47) ok=false;
	else 
	{
		for(int i=0;i<a.size();i++)
		{
			if(x==a[i]&&y!=a[i+1])
			{
				ok=false;
				break;
			}
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	
	
	return 0;
}