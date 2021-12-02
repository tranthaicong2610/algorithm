#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<cmath>
#include<stack>
#include <iomanip> 
using namespace std;

struct point{
	int x;
	int y;
}ss[1010];
 
int cmp(const void *a,const void *b)
{
	point *p=(point *)a;
	point *q=(point *)b;
	return (p->x-q->x);
}
 
int main()
{
	int s,n;
	int i,j;
	int sum;
	while(cin>>s>>n)
	{
		for(i=0;i<n;i++)
		  cin>>ss[i].x>>ss[i].y;
		qsort(ss,n,sizeof(struct point),cmp);
		sum=s;
		for(i=0;i<n;i++)
		{
		  if(s>ss[i].x)
		  {
			 s+=ss[i].y;
		  }
		  else
		    break;
		}
		if(i<n)
		   cout<<("NO\n");
		else
		   cout<<("YES\n");
	}
	//system("pause");
	return 0;
}
   