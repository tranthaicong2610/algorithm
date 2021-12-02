#include<iostream>
using namespace std;
int x[100],n;
bool ok=true;
void init()
{
	for(int i=1;i<=n;i++)
	{
		x[i]=i;
	}
}
void result()
{
	for(int i=1;i<=n;i++)
	{
		cout<<x[i];
	}
	cout<<endl;
}
void Next_Permutation()
{
	int j,k,r,s,temp;
	j=n-1;
	while(j>0&&x[j]>x[j+1]) j--;
	if(j==0) {
		ok=false;
	
	}
	else{
		k=n ;
		while(x[j]>x[k]) k--;
		swap(x[j],x[k]);
		r=j+1;s=n;
		while(r<s)
		{
			swap(x[r],x[s]);
			r++;s--;
		}
	}
}

int main()
{
	cin>>n;
	init();
	while(ok)
	{
		result();
		Next_Permutation();
		
	}
	
	return 0;
}