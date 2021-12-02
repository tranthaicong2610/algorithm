#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	bool ok=false;
	int n;
	int a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a!=b) ok=true;
	}
	if(ok){
		
		cout<<"Happy Alex";
	}
	else {
		
		cout<<"Poor Alex";
	}
	return 0;
}