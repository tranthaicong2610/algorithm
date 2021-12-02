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
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i%2==0){
				if((i/2)%2==1)
				{
					if(j==m) cout<<"#";
					else cout<<".";
				}
				else{
					if(j==1) cout<<"#";
					else cout<<".";
				}
				
			}
			else {
				cout<<"#";
			}
		}
		cout<<endl;
	}
	
	return 0;
}