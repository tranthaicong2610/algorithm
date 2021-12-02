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
	long long n,kq;
	cin>>n;
	kq=n/5;
	if(n%5!=0) kq++;
	cout<<kq;
	
	return 0;
}
