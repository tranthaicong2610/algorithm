#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	string s;
	
	vector<string >kq;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		kq.push_back(s);
		
	}
	string k=kq[0];
	int sum=0;
	for(int i=0;i<kq.size();i++)
	{
		if(kq[i]==k) sum++;
		
	}
	
	if(2*sum>=n){
		
		cout<<k;
	}
	else {
		for(int i=0;i<kq.size();i++)
		{
			if(kq[i]!=k) 
			{
				cout<<kq[i];
				break;
			}
		}
	}
	return 0;
}