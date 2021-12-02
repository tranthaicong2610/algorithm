#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
using namespace std;
//long long nhi_phan_sang_thap_phan(string s)
//{
//	long long kq=0;
//	int t=s.length()-1;
//	for(int i=0;i<s.length();i++)
//	{
//		if(s[i]=='1')
//		{
//			kq+=pow(2,t-i);
//		}
//	}
//	return kq;
//}

int main()
{
//	string s;
//	cin>>s;
//	cout<<nhi_phan_sang_thap_phan(s);
//	stack<int> a;
//	a.push(1);
//	a.push(2);
//	cout<<a.top();
//	bool ok=true;
	long  a=5,b,count=0;
	long  sum=0;
	while(a--) 
	{
		cin>>b;
		sum+=b;
//		if(b==0) count++;
	}
	if(sum%5==0&&sum!=0) cout<<sum/5;
	else cout<<-1;
//	cout<<count<<endl;
//	if(count>3) cout<<-1;
//	else 
//	{
//		if(sum%5==0)  
//		{
//			
//			cout<<sum/5;
//		}
//		else cout<<-1;
//	}
	
	
	return 0;
}