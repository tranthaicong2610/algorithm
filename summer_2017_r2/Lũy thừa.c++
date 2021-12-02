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
	long n;
	cin>>n;
	if(n==0) cout<<1;
	else {
		int k=n%4;
		if(k==0) cout<<6;
		else if (k==1) cout<<8;
		else if (k==2) cout<<4;
		else cout<<2;
	}
	
	
	return 0;
}
/*
1378
1898884
2616662152
3605760445456
4968737893838368
6846920817709271104
8770665137794705536
3359191601347920128
-1166735843663519232
-2895258155598511104
 8 4 2 6 8
 1 2 3 4 5 
*/