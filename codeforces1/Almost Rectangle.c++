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
	int k, n;
	char map[500][500];
	scanf("%d",&k);
	while(k--){
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%s", map[i]);
		int x1 = 0;
		int y1 = 0;
		int f1 = 0;
		int x2 = 0;
		int y2 = 0;
		int f2 = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++){
				if (map[i][j] == '*'){
					if (!f1){
						x1 = i;
						y1 = j;
						f1 = 1;
					}
					else{
						x2 = i;
						y2 = j;
						f2 = 1;
						break;
					}
				}
			}
		if (x1 == x2){
			if (x1 != 0){
				map[0][y1] = '*';
				map[0][y2] = '*';
			}
			else{
				map[n - 1][y1] = '*';
				map[n - 1][y2] = '*';	
			}
		}
		else if (y1 == y2){
			if (y1 != 0){
				map[x1][0] = '*';
				map[x2][0] = '*';
			}
			else{
				map[x1][n - 1] = '*';
				map[x2][n - 1] = '*';	
			}
		}
		else{
			map[x1][y2] = '*';
			map[x2][y1] = '*';
		}
		for (int i = 0; i < n; i++) printf("%s\n",map[i]);
	}
	return 0;
}