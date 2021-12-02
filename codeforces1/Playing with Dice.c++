#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;


int main(){
	
	int a,b,n1=0,h=0,n2=0;
	cin>>a>>b;
	
		for(int i=1;i<=6;i++)
		{
			if(abs(a-i)<abs(b-i)) n1++;
			else if(abs(a-i)==abs(b-i)) h++;
			else n2++;
		}
		
	
	cout<<n1<<" "<<h<<" "<<n2;
 	return 0;
}