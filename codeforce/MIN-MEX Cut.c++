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
		 string s;
        cin>>s;
        long cnt0=0;long mi=100000;long ma=(-100000);
        for(long i=0;i<s.size();++i)
        {
            if(s[i]=='0') {cnt0++;mi=min(mi,i);ma=max(ma,i);}
        }
        if(cnt0==0)
        {
            cout<<0<<'\n';
        }
        else if(cnt0==(ma-mi+1))
        {
            cout<<1<<'\n';
        }
        else
        {
            cout<<2<<'\n';
        }
	}
	
	return 0;
}