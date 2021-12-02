#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int a[5000];
	int n;
	cin>>n;
	for(int i=0;i<5000;i++) a[i]=0;
	for(int i=2;i<5000;i++)
	{
		if(!a[i]){
			for(int j=i+i;j<5000;j+=i) a[j]++;
		}
	}
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(a[i]==2) sum++; 
	}
	cout<<sum;
	return 0;
}