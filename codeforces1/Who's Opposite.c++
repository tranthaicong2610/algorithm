#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;
void run_case(long long A,long long B,long long C) {
    

    int N = 2 * abs(A - B);
 
    if ((A <= N / 2) == (B <= N / 2)) {
        cout << -1 << '\n';
        return;
    }
 
    if (C > N) {
        cout << -1 << '\n';
        return;
    }
 
    cout << (C <= N / 2 ? C + N / 2 : C - N / 2) << '\n';
}
int main()
{
	int test ;cin>>test;
	while(test--)
	{
		long long a,b,c,d,m;
		cin>>a>>b>>c;
		run_case(a,b,c);

		
	}
	
	return 0;
}