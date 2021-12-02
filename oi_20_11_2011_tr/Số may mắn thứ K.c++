	#include<iostream>
	#include<vector>
	#include<algorithm>
	#include<string>
	#include<queue>
	using namespace std;
	int main()
	{
		queue<long long>a;
		
		long k,kq;
		cin>>k;
		a.push(4);
		a.push(7);
//	
			kq=4;
			while(k--)
			{
				kq=a.front();
				long long temp=a.front()*10+4;
				a.push(temp);
				a.push(temp+3);
				a.pop();
				
			}
//			cout<<a.front();

		
		cout<<kq;
		return 0;
	}