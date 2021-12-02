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
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int a[300];
	for(int i=0;i<300;i++) a[i]=0;
	for(int i=0;i<s1.length();i++) a[s1[i]]++;
	for(int i=0;i<s2.length();i++) a[s2[i]]++;
	for(int i=0;i<s3.length();i++) a[s3[i]]--;
	for(int i=0;i<300;i++) {
		if(a[i]!=0) {
			cout<<"NO";
			return 0;
		}
			}
		cout<<"YES";
	return 0;
}