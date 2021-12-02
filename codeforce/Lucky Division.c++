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
	vector<int >kq;
	queue<int >a;
	a.push(4);
	a.push(7);
	while(a.front()<1000){
		kq.push_back(a.front());
		int temp=a.front()*10;
		a.push(temp+4);
		a.push(temp+7);
		a.pop();
	}
	int n;
	cin>>n;
	bool ok=false;
	for(int i=0;i<kq.size();i++){
		if(n%kq[i]==0) {
			ok=true;
			break;
		}
	}
	if(ok) cout<<"YES";
	else cout<<"NO";
	

	
	return 0;
}
