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
	int s;
	cin>>s;
	int a;
	for(int i=0;i<s;i++) {
		cin>>a;
		if(a==1){
		cout<<"HARD";
		return 0;
	}
	}
	cout<<"EASY";
	return 0;
}
